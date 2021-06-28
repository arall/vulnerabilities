window.addEventListener("message", function(event) { // Noncompliant: no checks are done on the origin property.
      console.log(event.data);
 });