// Filename: type_system_js.js
function combine(a, b) {
    let result = a + b;
    console.log(`JavaScript Result (${typeof a} + ${typeof b}): ${result}`);
  }
  
  combine(10, 5);          // Number addition
  combine("Hello, ", "World!"); // String concatenation
  combine(10, "World!");   // Coerces number to string and concatenates