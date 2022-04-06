#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    /*
    C++ has two types of variables:
    1. Primitive types:
    int, float, double, char, bool, short, long, long long, unsigned int, unsigned short, unsigned long, unsigned long long
    2. Non-primitive types:
    string, vector, array, list, map, set, unordered_map, unordered_set, any other class
    */
    // Primitive types
    int i = 5; // int is a primitive type
    float f = 5.5f; // float is a primitive type
    double d = 5.5; // double is a primitive type
    char c = 'A'; // char is a primitive type
    bool b = true; // bool is a primitive type
    short s = 5; // short is a primitive type
    long l = 5; // long is a primitive type
    long long ll = 5; // long long is a primitive type
    unsigned int ui = 5; // unsigned int is a primitive type
    unsigned short us = 5; // unsigned short is a primitive type
    unsigned long ul = 5; // unsigned long is a primitive type
    unsigned long long ull = 5; // unsigned long long is a primitive type
    //multiline string
    const char* ms1 = "jdflsj\
    gffdgd\
    dfgdgdgf\
    dfgdfgdfg\
    dfgdfgdfg"; // \ is used to escape the new line character
    const char* ms2 = R"V0G0N(
             O freddled gruntbuggly thy micturations are to me
                 As plured gabbleblochits on a lurgid bee.
              Groop, I implore thee my foonting turlingdromes.   
           And hooptiously drangle me with crinkly bindlewurdles,
Or I will rend thee in the gobberwarts with my blurlecruncheon, see if I don't.

                (by Prostetnic Vogon Jeltz; see p. 56/57)
)V0G0N"; // R"V0G0N" is used to define a string literal. The string literal is enclosed in double quotes. 
    printf("Int: %d\nFloat: %f\nDouble: %lf\nChar: %c\nBool: %d\nShort: %hd\nLong: %ld\nLong Long: %lld\nUnsigned Int: %u\nUnsigned Short: %hu\nUnsigned Long: %lu\nUnsigned Long Long: %llu\nMultiline String 1: %s\nMultiline String 2: %s\n", i, f, d, c, b, s, l, ll, ui, us, ul, ull, ms1, ms2);

    string s1 = "Hello World!"; // string is a non-primitive type
    vector<int> v1; // vector is a non-primitive type
    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(15);
    //array<int, 3> a2 = {1, 2, 3}; // array is a non-primitive type
    list<int> l1; // list is a non-primitive type
    l1.push_back(5);
    l1.push_back(10);
    l1.push_back(15);
    map<int, string> m1; // map is a non-primitive type
    m1[1] = "Hello";
    m1[2] = "World";
    set<int> s2; // set is a non-primitive type
    s2.insert(5);
    s2.insert(10);
    s2.insert(15);
    unordered_map<int, string> um1; // unordered_map is a non-primitive type
    um1[1] = "Hello";
    um1[2] = "World";
    unordered_set<int> us1; // unordered_set is a non-primitive type
    us1.insert(5);
    us1.insert(10);
    us1.insert(15);
    printf("String: %s\n", s1.c_str());
    for(auto i : v1)
    {
        printf("Vector: %d\n", i);
    }
    for(auto i : l1)
    {
        printf("List: %d\n", i);
    }
    for(auto i : m1)
    {
        printf("Map: %d %s\n", i.first, i.second.c_str());
    }
    for(auto i : s2)
    {
        printf("Set: %d\n", i);
    }
    for(auto i : um1)
    {
        printf("Unordered Map: %d %s\n", i.first, i.second.c_str());
    }
    for(auto i : us1)
    {
        printf("Unordered Set: %d\n", i);
    }
    // the main difference between primitive types and non-primitive types is that non-primitive types are passed by reference
    // and primitive types are passed by value
    system("pause");
    return 0;
}