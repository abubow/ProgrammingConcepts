#include <iostream>
#include <string>
#include "Stack.h"

int main(){
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
}