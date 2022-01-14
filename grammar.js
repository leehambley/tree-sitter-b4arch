module.exports = grammar({

    name: 'b4arch',

    rules: {
        diagram: $ => repeat($._expression),

        _expression: $ => seq(
            choice(
                $.repository_definition,
                $.description_definition,
                $.uses_definition,
                $.comment
            ),
            optional(";")
        ),

        _expr_delimiter: $ => repeat1(
            choice($._newline, $._semicolon),
        ),

        identifier: $ => seq(
            optional($._quote),
            /[a-z]+/i,
            optional($._quote)
        ),

        _quote: $ => '"',

        _newline: $ => token("\n"),

        // TODO: finish handling URLs
        url: $ => seq(
            "\"",
            optional(
                choice(
                    "http://",
                    "https://"
                )
            ),
            $._url_host,
            // optional(":"),
            // $._url_port,
            optional($._url_path),
            "\"",
        ),

        _url_host: $ => /[a-z]+\.[a-z]+/i,

        _url_port: $ => /\d+/,

        // TODO: unfinished
        _url_path: $ => "/",

        _semicolon: $ => token(";"),

        _comma: $ => token(","),

        description: $ => $._string,

        purpose: $ => $._string,

        _string: $ => seq(
            $._quote,
            /[^\"]*/,
            $._quote,
        ),

        comment: $ => seq(/#.*/, $._newline),

        repository_definition: $ => seq(
            'Repository',
            token('('),
            $.identifier,
            token(','),
            $.url,
            token(')'),
        ),

        description_definition: $ => seq(
            'Description',
            token('('),
            $.identifier,
            token(','),
            $.description,
            token(')'),
        ),

        uses_definition: $ => seq(
            'Uses',
            token('('),
            $.identifier,
            $._comma,
            $.identifier,
            optional(
                seq(
                    $._comma,
                    $.purpose,
                ),
            ),
            token(')'),
        )
    },

});
