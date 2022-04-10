mod print;
mod variables;
mod types;
fn main() {
    println!("Hello, world!");
    print::run();
    variables::run();
    types::run();
}
