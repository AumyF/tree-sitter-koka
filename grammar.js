module.exports = grammar({
  name: "koka",
  rules: {
    source_file: ($) => $._expression,
    _expression: ($) => choice($.basic_expr),
    basic_expr: ($) => choice($.if_expr, $.opexpr),
    if_expr: ($) => prec.right(1, choice(seq("if", $.atom, "then", $.atom, optional(seq("else", $.blockexpr))))),
    blockexpr: ($) => $._expression,
    opexpr: ($) => seq($.prefixexpr, repeat(seq($.qoperator, $.prefixexpr))),
    prefixexpr: ($) => seq(repeat(choice("!", "~")), $.appexpr),
    appexpr: ($) => choice(seq($.appexpr, "(", optional($.arguments), ")"), seq($.appexpr, "[", optional($.arguments), "]"), $.atom),
    ntl_expr: ($) => seq($.ntl_prefix_expr, repeat(seq($.qoperator, $.ntl_prefix_expr))),
    ntl_prefix_expr: ($) => seq(repeat(choice("!", "~")), $.ntl_app_expr),
    ntl_app_expr: ($) => choice(seq($.ntl_app_expr, "(", $.arguments, ")")),
    arguments: ($) => seq($.argument, repeat(seq(",", $.argument))),
    argument: ($) => seq($._expression),
    qoperator: ($) => $.op,
    op: ($) => choice($.symbols, "||"),
    symbols: ($) => /((\$|%|&|\*|\+|~|!|\\|\^|#|=|\.|:|-|\?|<|>|\|)+)|\//,
    symbol: ($) => choice("$", "%", "&", "*", "+", "~", "!", "^", "#", "=", ".", ":", "-", "?", $.anglebar),
    anglebar: ($) => choice("<", ">", "|"),
    ntlappexpr: ($) => choice($.atom),
    lowerid: ($) => /[a-z]([A-Za-z]|\d|-|_)*'*/,
    varid: ($) => $.lowerid,
    identifier: ($) => choice($.varid),
    qidentifier: ($) => choice($.identifier),
    atom: ($) => choice($.qidentifier, seq("(", ")"))
  }
});
