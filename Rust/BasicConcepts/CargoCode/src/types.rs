/*
Primitive types are:
- integers: u8, i8, u16, i16, u32, i32, u64, i64, u128, i128 
- floats: f32, f64
- boolean: bool
- characters: char
- tuples: (i32, f64, u8)
- arrays: [i32; 5]
- slices: &[i32]
- references: &i32
- mutable references: &mut i32
*/
pub fn run(){
    println!("Code in types.rs:[ \n");
    let x = 1;
    // by default, variable types are inferred
    // the above line is equivalent to:
    // let x: i32 = 1;
    println!("x = {}", x);
    // we can also specify the type of a variable
    let y: i32 = 2; //explicitly specify the type of the variable
    println!("y = {}", y);
    
    let z = 3.0;
    println!("z = {}", z);
    // the above line is equivalent to:
    // let z: f64 = 3.0;

    // Checking the type of a variable
    println!("x is of type: {}", std::any::type_name::<i32>());

    // Checking th max value of a type
    println!("max i32: {}", std::i32::MAX);
    println!("max i64: {}", std::i64::MAX);
    println!("max u8: {}", std::u8::MAX);
    println!("max u16: {}", std::u16::MAX);
    println!("max u32: {}", std::u32::MAX);
    println!("max u64: {}", std::u64::MAX);
    println!("max u128: {}", std::u128::MAX);
    println!("max f32: {}", std::f32::MAX);
    println!("max f64: {}", std::f64::MAX);

    // Booleans
    let is_active = true;
    println!("is_active = {}", is_active);
    // the above line is equivalent to:
    // let is_active: bool = true;
    // Booleans can be derived from an expression
    let is_greater = 10 < 5;
    println!("is_greater = {}", is_greater);

    // Characters
    let a = 'a';
    let b = 'b';
    let c = 'c';
    println!("a = {}, b = {}, c = {}", a, b, c);
    // the above line is equivalent to:
    // let a: char = 'a';
    // let b: char = 'b';
    // let c: char = 'c';
    
    // you van use emoji in your code
    let d = '💩';
    println!("d = {}", d);
    // the above line is equivalent to:
    // let d: char = '💩';
    // or let d = '\u{1F4A9}'; which can be read as:
    // unicode character with the hexadecimal value 1F4A9 (1F4A9 = 💩)
    

    println!("\n\t]End of types.rs\n");
}