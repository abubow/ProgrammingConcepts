pub fn run(){
    println!("Code in print.rs:[ \n");
    println!("Hello from print.rs");
    let x = 1; // variables in Rust are immutable by default
    // let x = 2; // this will cause an error
    // x = 3; // this will cause an error
    // to make a variable mutable, you must prefix it with the keyword mut
    let mut y = 2;
    y = 3;
    //this is discussed in the next section
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

    //Positing values in a string using the format! macro
    let man = "Howard";
    let height = 6;
    let sentence = format!("{0} is an honest man. He is approximately {1} feet tall. {0} got married in 1990 and has his first child {0} Jr 2 years later, who is now {1} feet tall as well", man, height);
    println!("{}", sentence);
    let pi = 3.141592653589793;
    let value = format!("Pi is roughly {:.*}", 2, pi); // this will print "Pi is roughly 3.14" to the console
    println!("{}", value);
    // we can also use the format! macro to print formatted output to a buffer
    let mut buffer = String::new();
    let value = format!("{} is {} years old", name, age);
    buffer.push_str(&value); // this will add the value to the buffer
    println!("{}", buffer);

    //named arguments in the format! macro
    let sentence2 = format!("{name} is {age} years old", name = "John", age = 30);
    println!("{}", sentence2);

    //Placeholders traits in the format! macro
    let converted = format!("Binary: {0:b} \n Octal: {0:o}\n Hex: {0:x}", 176);
    println!("{}", converted);

    //Placeholder for debug trait in the format! macro
    let debug = format!("{:?}", (1, 2, 3, true,  4, "word", 'c', 5)); //you can use {:?} to print the debug representation of a value
    println!("{}", debug);

    println!("\n\t]End of print.rs\n");
}