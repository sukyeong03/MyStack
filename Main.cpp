#include <iostream>
using namespace std;

#include "MyStack.h"

int main(void) {
    MyStack<int> intStack; // 정수형 스택
    MyStack<char> charStack; // 문자형 스택
    
    intStack.push(30);
    intStack.push(19);
    intStack.push(41);
    intStack.push(63);
    intStack.push(3);
    intStack.push(99);
    intStack.push(83);
    intStack.push(22);
    intStack.push(77);
    intStack.push(681);
    intStack.push(492);
    intStack.push(45);
    intStack.printStack();

    intStack.sort();
    intStack.printStack();

    

}



