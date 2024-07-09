//const PREC = {
//  COMMENT: 1,
//  COMMAND: 2,
//}

module.exports = grammar({
  name: 'cram',

  rules: {
    file: $ => repeat(choice(
      $.command_line,
      $.continuation_line,
      $.comment,
      $.output,
      $._empty)
    ),

    command: _ => /[^\n]*\n/,

    command_line: $ => seq($.command_prefix, $.command),
    command_prefix: _ => token(prec(3, /  \$/)),

    continuation_line: $ => seq($.continuation_prefix, $.command),
    continuation_prefix: _ => token(prec(3, /  >/)),

    output: $ => prec.right(seq(
      $.output_content,
      optional($.language_specifier),
    )),

    output_content : _ => prec.right(repeat1(token(prec(2, /  [^\n]*\n/)))),
    language_specifier: $ => seq(/< language: /, $.language_name, $._empty),
    language_name: _ => token(/[a-zA-Z0-9_]+/),

    comment: $ => token(prec.left(-1, /[^\n]+\n/)),

    _empty: $ => choice('\n', '\r\n'),
  }
});
