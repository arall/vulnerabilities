const vm = require("vm");

let input = req.query.input;
vm.runInThisContext(input);  // Noncompliant
const context = {};
vm.createContext(context);
vm.runInContext(input, context); // Noncompliant
vm.runInNewContext(input, context); // Noncompliant
vm.compileFunction(input)(); // Noncompliant
(new vm.Script(input)).runInThisContext(); // Noncompliant