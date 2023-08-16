module.exports = grammar({
  name: "jet",

  externals: ($) => [$._lang],

  rules: {
    source_file: ($) =>
      repeat(choice($.directive, $.scriptlet, $.expression, $.template)),

    directive: ($) => seq("<%@", $.ident, repeat($.attribute), "%>"),

    attribute: ($) => seq($.ident, "=", $.string),

    scriptlet: ($) => seq("<%", $.java, "%>"),

    expression: ($) => seq("<%=", $.java, "%>"),

    java: ($) => $._lang,

    template: ($) => $._lang,

    ident: ($) => /[a-zA-Z0-9_]+/,

    string: ($) => /".*"/,
  },
});
