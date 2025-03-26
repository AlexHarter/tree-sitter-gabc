/**
 * @file A notation for representing Gregorian chant using ASCII characters.
 * @author Alex Harter <alex@harter.tech>
 * @license GPL-3.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "gabc",

  rules: {
    source_file: $ => seq(
      optional($.header),
      $.score
    ),

    header: $ => seq(
      repeat1(choice($.field, $.comment)),
      "%%"
    ),

    field: $ => seq(
      $.key,
      ":",
      $.value,
      ";"
    ),
    key: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    value: $ => /[^;]+/,


    comment: $ => token(seq("%", /.*/)),

    
    score: $ => repeat1($.neume),

    neume: $ => seq(
      $.lyric,
      '(',
      repeat($.note),
      ')'
    ),
    lyric: $ => /[a-zA-Z]+/,
    note: $ => seq(
      /[a-mA-M]/,
      repeat($.modifier),
      repeat($.bar)
    ),
    modifier: $ => choice(
      "_", //episema
      ".", //morae
      "x", //flat
      "y", //natural
      "#", //sharp
      "/", //space
      "!", //no space, no connection
      "@", //connect
      "~", //diminutive liquescence
      "<", //augmentative ascending liquensence
      ">", //augmentative descending liquesence
      "w", //quilisma
      "o", //oriscus
      "s", //stropha
    ),
    bar: $ => choice(
      "'", //quarter bar
      "`", //comma
      ";", //half bar
      ":", //full bar
      ":?", //dotted bar
      "::", //double bar
    ),
  }
});
