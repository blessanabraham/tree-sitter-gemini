(link) @punctuation.bracket
(link 
  label: (text) @markup.link.label)
(link
  uri: (uri) @markup.link.url)

[
  (start_pre)
  (pre)
  (end_pre)
] @markup.raw.block
(start_pre
  alt: (text) @label)

(heading1) @markup.heading.1
(heading2) @markup.heading.2
(heading3) @markup.heading.3

(ulist) @markup.list.unnumbered
(quote) @markup.quote
