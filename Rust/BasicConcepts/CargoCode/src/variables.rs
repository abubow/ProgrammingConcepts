pub fn run(){
    println!("Code in variables.rs:[ \n");
    println!("Hello from variables.rs");
    let x = 1; // variables in Rust are immutable by default
    // let x = 2; // this will cause an error
    // x = 3; // this will cause an error
    // to make a variable mutable, you must prefix it with the keyword mut
    let mut y = 2;
    y = 3;
    println!("x = {}, y = {}", x, y); // we can print variables using the {} placeholder
    
    //we can define constants using the const keyword
    const MAX_POINTS: u32 = 100_000; // this is a constant with a type u32
    //Constants in rust are immutable and you have to specify the type
    //const MAX_POINTS: u32 = 100_000; // this is a constant with a type unsigned 32-bit integer
    // It is convention to use CAPS_SNAKE_CASE for constants
    // also you can seperate numbers with underscores
    println!("MAX_POINTS = {}", MAX_POINTS);

    // we can assign multiple variables at once
    let (x, y, z) = (1, 2, 3);
    println!("x = {}, y = {}, z = {}", x, y, z);

    println!("\n\t]End of variables.rs\n");
}