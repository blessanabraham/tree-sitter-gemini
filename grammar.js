module.exports = grammar({
  name: 'gemini',
  // control whitespace explicitly
  extras: $ => [],

  rules: {
    source_file: $ => repeat(seq(
      choice(
        $.text,
        $.link,
        seq(
          $.start_pre, 
          optional(repeat(seq($.pre, '\n'))), 
          $.end_pre,
        ),
        $.heading1,
        $.heading2,
        $.heading3,
        $.ulist,
        $.quote,
      ),
      '\n',
    )),

    /* 5.4 Core line types */

    /* 5.4.1 Text lines */
    _word: $ => /\S+/,
    text: $ => repeat1($._word),

    /* 5.4.2 Link lines */
    link: $ => seq('=>', optional(repeat1(' ')), $._word, optional(seq(repeat1(' '), field('label', $.text)))),

    /* 5.4.3 Preformatting toggle lines */
    start_pre: $ => seq('```', optional(seq(optional(repeat1(' ')), field('alt', $.text))), '\n'),
    end_pre: $ => '```',

    /* 5.4.4 Preformatted text lines */
    // defined separately for highlighting
    pre: $ => $.text,
    
    /* 5.5 Advanced line types */
    
    /* 5.5.1 Heading lines */
    heading1: $ => seq('#', optional(repeat1(' ')), $.text),
    heading2: $ => seq('##', optional(repeat1(' ')), $.text),
    heading3: $ => seq('###', optional(repeat1(' ')), $.text),

    /* 5.5.2 Unordered list items */
    ulist: $ => seq('*', repeat1(' '), $.text),

    /* 5.5.3 Quote lines */
    quote: $ => seq('>', optional(repeat1(' ')), $.text),
  }
});
