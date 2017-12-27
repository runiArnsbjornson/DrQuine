const fs = require("fs")
const kid = "Grace_kid.js"
const not_a_main = function main() {fs.writeFile(kid, 'const fs = require("fs")\nconst kid = "Grace_kid.js"\nconst not_a_main = ' + main.toString() + '\n\n/*\n    Why you do that to me ? This be a useful comment !\n*/\n\n!not_a_main()\n', function(err){if (err) { return console.log(err)}})}

/*
    Why you do that to me ? This be a useful comment !
*/

!not_a_main()
