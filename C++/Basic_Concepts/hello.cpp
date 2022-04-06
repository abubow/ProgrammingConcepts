#include<iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl; // cout is a function
    // << is an operator known as the insertion operator. It is used to insert data into a stream.
    // endl is a function that is used to insert a new line character into a stream.
    // to print a string, use the " "
    // to print a number, use the number
    cout << "Number: " << 5 << endl; //you can pass multiple arguments to the cout function


    // another way is to use the printf function
    printf("Hello World!\n");
    // to print a number, use the %d
    printf("Number: %d\n", 5);
    // to print a string, use the %s
    printf("String: %s\n", "Hello World!");
    // to print a character, use the %c
    printf("Character: %c\n", 'A');
    // to print an int, use the %d
    printf("Int: %d\n", 5);
    // to print a short, use the %hd
    printf("Short: %hd\n", 5);
    // to print a float, use the %f
    printf("Float: %f\n", 5.5f);
    // to print a double, use the %lf
    double d = 5.5;
    printf("Double: %lf\n", d);
    // to print a long, use the %ld
    long l = 5;
    printf("Long: %ld\n", l);
    // to print a long long, use the %lld
    long long ll = 5;
    printf("Long Long: %lld\n", ll);
    // to print a unsigned int, use the %u
    unsigned int ui = 5;
    printf("Unsigned Int: %u\n", ui);
    // to print a unsigned short, use the %hu
    unsigned short us = 5;
    printf("Unsigned Short: %hu\n", us);
    // to print a unsigned long, use the %lu
    unsigned long ul = 5;
    printf("Unsigned Long: %lu\n", ul);
    
    /* It is recommended to use the printf function instead of cout if the speed is important. 
    The printf function is faster than cout. The printf function is also more secure. 
    However, cout is more flexible and easy to use. */
    system("pause");// pause is a function that pauses the program until the user presses a key.
    return 0;
}