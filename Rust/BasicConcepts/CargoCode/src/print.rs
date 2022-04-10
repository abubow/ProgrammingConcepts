pub fn run(){
    println!("Code in print.rs:[ \n");
    println!("Hello from print.rs");
    let x = 1; // variables in Rust are immutable by default
    // let x = 2; // this will cause an error
    // x = 3; // this will cause an error
    // to make a variable mutable, you must prefix it with the keyword mut
    let mut y = 2;
    y = 3;
    println!("x = {}, y = {}", x, y); // we can print variables using the {} placeholder
    // we can also print expressions using the {} placeholder
    // the expression will be evaluated and the result will be printed
    println!("{} + {} = {}", 1, 2, 1 + 2);
    // "{}" is a placeholder for a string, the string itself in known as a template
    // a string literal is a sequence of characters surrounded by double quotes
    println!("{}", "Strings can be printed by using the {} placeholder as well");

    // we can also print formatted output using the format! macro
    // the format! macro is a shortcut for writing formatted output to a buffer
    let name = "John";
    let age = 30;
    let value = format!("{} is {} years old", name, age); // this will print "John is 30 years old" to the console
    println!("{}", value);

}