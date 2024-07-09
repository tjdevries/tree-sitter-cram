((command) @injection.content
 (#set! injection.language "sh"))

(output
 (output_content) @injection.content
 (language_specifier (language_name) @injection.language))

