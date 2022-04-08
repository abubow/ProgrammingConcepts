#include <iostream>
#include <string>
#include "Stack.h"

int main(){
    std::cout << "Stack using default Constructors" << std::endl;
    Stack<int> stack;
    stack.push(56);
    stack.push(78);
    stack.push(90);
    stack.push(12);
    stack.push(34);
    stack.push(56);
    std::cout << "The stack is: \n";
    stack.print();
    std::cout << "Top element: " << stack.top() << std::endl;
    std::cout << "Popping element: " << stack.pop() << std::endl;
    std::cout << "The stack is: \n";
    stack.print();

    Stack<std::string> stack2;
    stack2.push("Hello");
    stack2.push("World");
    stack2.push("!");
    stack2.push("!");
    stack2.push("!");
    std::cout << "The stack is: \n";
    stack.print();
    std::cout << "Top element: " << stack2.top() << std::endl;
    std::cout << "Popping element: " << stack2.pop() << std::endl;
    std::cout << "The stack is: \n";
    stack2.print();

    std::cout << "Stack using Constructors" << std::endl;
    std::cout << "Enter the size of the stack: ";
    int size=-1;
    while(size<0){
        std::cin >> size;
        if(size<0)
            std::cout << "Enter a positive number: ";
    }
    Stack<int> stack3(size);
    int value = 0;
    bool flag = true;
    std::cout << "Enter the values of the stack: ";
    while(flag){
        std::cin >> value;
        stack3.push(value);
        std::cout << "Do you want to enter another value? (y/n): ";
        char c;
        std::cin >> c;
        c = tolower(c);
        c == 'y' ? flag = true : flag = false;
    }
    std ::cout << "The stack is: \n";
    stack3.print();
    while(!stack3.isEmpty()){
        std::cout << "Popping element: " << stack3.pop() << std::endl;
    }
    std::cout << "The stack is: \n";
    stack3.print();
    

    system("pause");
    return 0;
}