#include "stdio.h"

int main(){
    printf("Hello World!\n"); // prints "Hello World!", followed by a newline, where "Hello World!" is the string to be printed
    printf("%d\n", 5); // prints "5", followed by a newline, where 5 is the integer to be printed
    //where %d is the format specifier for an integer
    // it is a placeholder for the integer to be printed
    printf("%f\n", 5.5); // prints "5.5", followed by a newline, where 5.5 is the floating point number to be printed
    //where %f is the format specifier for a floating point number
    printf("%s\n", "Hello World!"); // prints "Hello World!", followed by a newline, where "Hello World!" is the string to be printed
    //where %s is the format specifier for a string
    printf("%c\n", 'H'); // prints "H", followed by a newline, where H is the character to be printed
    //where %c is the format specifier for a character
    printf("%d %f %s %c\n", 5, 5.5, "Hello World!", 'H'); // prints "5 5.5 Hello World! H", followed by a newline
    //where %d, %f, %s, and %c are the format specifiers for integers, floating point numbers, strings, and characters, respectively
    return 0;
}