var Module = require('module');

let name = req.query.name;
let input = req.query.input;
var mod = new Module(name, module.parent);
mod._compile(input, name); // Noncompliant