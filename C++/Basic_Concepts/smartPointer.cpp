#include<iostream>
using namespace std;

int main(){
    unique_ptr<int> up1(new int(5)); // unique_ptr is a smart pointer
    unique_ptr<int> up2 = std::make_unique<int>(10); // make_unique is a factory function
}