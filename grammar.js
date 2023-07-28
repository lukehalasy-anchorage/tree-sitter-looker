module.exports = grammar({
  name: 'looker',


  rules: {
    // source_file: $ => choice($.view_definition, $.model_definition),
    source_file: $ => choice($.view_definition, $.model_definition),

    // TODO: Add the other fields like include + tests here, and view refinements
    view_definition: $ => seq("view", $.assignment, $.identifier, $.view_definition_block),
    model_definition: $ => repeat1(choice($.statement, $.explore_definition)),
    explore_definition: $ => seq("explore", $.assignment, $.identifier, $.block),

    lookml_comment: $ => seq("#", /.*/), 

    view_definition_block: $ => seq(
      '{',
      prec(2, optional($.table_specification)),
      repeat($.statement),
      '}'
    ),    


    table_specification: $ => choice($.sql_table_name_declaration, $.derived_table),

    // TODO: Two issues with this. 1) Backticks are optional (probably all quotes are) 2) this whole field thing wont work with b.c, b will be listed as project_name 
    sql_table_name_declaration: $ => seq(
      "sql_table_name",
      $.assignment,
      // TODO: would be cool to highlight dataset and table name different colors
      $.sql_query,
      ";;"
    ),
    derived_table: $ => seq("derived_table", $.assignment, $.derived_table_block),
    derived_table_block: $ => seq(
      "{",
      $.derived_table_definition,
      // optional(repeat($.derived_table_parameters)),
      "}"
    ),
    // TODO: Change this to a choice between native derived and sql-based derived table
    derived_table_definition: $ => seq(
      "sql", 
      $.assignment,
      $.derived_table_sql_query,
      ";;"
    ),

    // TODO: This needs to be smarter in-case their is a ; in the query
    derived_table_sql_query: $ => /[^;]+/,

    // TODO: The identifier could be of form "It must consist of characters a through z, 0 through 9, or _" per https://cloud.google.com/looker/docs/reference/param-field-dimension
    dimension_definition: $ => seq("dimension", $.assignment, $.identifier, $.dimension_definition_block),
    dimension_definition_block:  $ => seq(
      '{',
      repeat($.dimension_parameter),
      '}'
    ),
    dimension_parameter: $ => seq($.identifier, $.assignment, $.identifier),
    assignment: $ => ":",
    
    identifier: $ => /([a-z\d_]+\.)?[a-z_\d]+/,
    list: $ => seq(
      "[", 
      repeat(
        seq(
          choice(
            $.identifier,
            $.list,
            $.string,
            $.boolean,
            seq(
              $.identifier,
              $.assignment,
              choice(
                $.identifier,
                $.list,
                $.string,
                $.boolean
              )
            )
          ),
          optional(",")
        )
      ),
      "]"
    ),
    block: $ => seq(
      "{",
      // TODO: sql query part is breaking this. { a: b, c: ds ;; } will return "b, c: ds " as the sql_query
      repeat(
        $.statement
      ),
      "}"
    ),

    statement: $ => choice(
      $.lookml_comment,
      prec(2, $.sql_containing_field),
      seq(
        $.identifier,
        $.assignment,
        choice(
          seq($.identifier, $.block),
          $.identifier,
          $.list,
          $.string,
          $.boolean,
          $.block
        )
      )  
    ),
          
    sql_containing_field: $ => seq(
      choice(
        "sql_on",
        "sql_where",
        "sql_foreign_key",
        "sql_always_having",
        "sql_always_where", 
        "sql_distinct_key",
        "sql"
      ),
      $.assignment,
      $.sql_query,
      ";;"
    ),
    
    sql_query: $ => /[^;]+/,

    string: $ => seq( "\"", /[^"]*/, "\""),
    boolean: $ => choice("yes", "no")

  }
});