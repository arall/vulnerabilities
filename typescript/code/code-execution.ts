let input = req.query.input;
eval(input); // Noncompliant
(Function(input))(); // Noncompliant
(new Function(input))(); // Noncompliant