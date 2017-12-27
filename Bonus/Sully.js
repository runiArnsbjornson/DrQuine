const fs = require("fs")
const path = require("path")
const exec = require("child_process").exec
let i = 5

!function cloner() {
    i = path.basename(__filename) === "Sully.js" ? i : i - 1;
    let clone = "Sully_" + i + ".js"
    fs.writeFile(clone, 'const fs = require("fs")\nconst path = require("path")\nconst exec = require("child_process").exec\nlet i = ' + i + '\n\n!' + cloner + '()', function(err){if (err) { return console.log(err)}})
    if (i > 0) {
        exec('node ' + clone, function(err, stdout, stderr){if (err) {return console.log(err)}})
    }
}()