fn main(){
    println!("Hello, world!"); // Prints "Hello, world!" to the console (stdout) with a newline (\n) at the end
    print!("Hello, world!"); // print! is a macro that prints to stdout without a newline
    println!("Hello, world!"); // println! is a macro that prints to stdout with a newline
    println!("{}", 1); 
    println!("{} + {} = {}", 1, 2, 1 + 2); 
}