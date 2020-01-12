external print_hello: unit => unit = "caml_print_hello";
// let foo = () => print_endline("Hello");
let foo = () => print_hello();
