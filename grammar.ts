type Parser = unknown;
interface Definition<Rule extends string> {
  name: string;
  rules: { [_ in Rule]: (dollar: { [_ in Rule]: Parser }) => Parser };
}
declare const grammar: <Rule extends string>(def: Definition<Rule>) => any;
declare const choice: (...args: Parser[]) => Parser;
declare const seq: (...args: Parser[]) => Parser;
declare const prec: {
  [_ in "left" | "right"]: (preci: number | string, arg: Parser) => Parser;
};
declare const optional: (arg: Parser) => Parser;
declare const repeat: (arg: Parser) => Parser;

module.exports = grammar({
  name: "koka",

  rules: {
    source_file: ($) => $._expression,
    _expression: ($) => choice($.basic_expr),
    basic_expr: ($) => choice($.if_expr, $.opexpr),
    if_expr: ($) =>
      prec.right(
        1,
        choice(
          seq("if", $.ntl_expr, "then", $.blockexpr, optional(seq("else", $.blockexpr)))
        )
      ),
    blockexpr: ($) => $._expression,
    opexpr: ($) => seq($.prefixexpr, repeat(seq($.qoperator, $.prefixexpr))),
    prefixexpr: ($) => seq(repeat(choice("!", "~")), $.appexpr),
    appexpr: ($) =>
      choice(
        seq($.appexpr, "(", optional($.arguments), ")"), // regular application
        seq($.appexpr, "[", optional($.arguments), "]"), // index operation
        seq($.appexpr, ".", $.atom),
        $.atom
      ),
    ntl_expr: ($) =>
      seq($.ntl_prefix_expr, repeat(seq($.qoperator, $.ntl_prefix_expr))),
    ntl_prefix_expr: ($) => seq(repeat(choice("!", "~")), $.ntl_app_expr),
    ntl_app_expr: ($) =>
      choice(
        seq($.ntl_app_expr, "(", $.arguments, ")"),
        seq($.ntl_app_expr, "(", $.arguments, ")"),
        seq($.ntl_app_expr, ".", $.atom),
        $.atom
      ),
    arguments: ($) => seq($.argument, repeat(seq(",", $.argument))),
    argument: ($) => seq($._expression),
    qoperator: ($) => $.op,
    op: ($) => choice($.symbols, "||"),
    symbols: ($) => /((\$|%|&|\*|\+|~|!|\\|\^|#|=|\.|:|-|\?|<|>|\|)+)|\//,
    symbol: ($) =>
      choice(
        "$",
        "%",
        "&",
        "*",
        "+",
        "~",
        "!",
        "^",
        "#",
        "=",
        ".",
        ":",
        "-",
        "?",
        $.anglebar
      ),
    anglebar: ($) => choice("<", ">", "|"),
    ntlappexpr: ($) => choice($.atom),
    lowerid: ($) => /[a-z]([A-Za-z]|\d|-|_)*'*/,
    varid: ($) => $.lowerid,
    identifier: ($) => choice($.varid), // TODO incomplete
    qidentifier: ($) => choice($.identifier), // TODO incomplete
    atom: ($) =>
      choice(
        $.qidentifier,
        seq("(", ")") // TODO
      ),
  },
});
