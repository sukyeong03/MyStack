#include <iostream>
using namespace std;

#include "MyStack.h"

int main(void) {
    MyStack<int> intStack; // 정수형 스택
    MyStack<char> charStack; // 문자형 스택

}

    하나

    cout << "수용량 " << charStack.capacity() << endl;
    cout << "크기 " << charStack.size() << endl;

    for(int i = 0; i < 15; i++)
        charStack.push(65 + i);
    for(int i = 0; i < 14; i++)
        charStack.popE();

    cout << "수용량 " << charStack.capacity() << endl;
    cout << "크기 " << charStack.size() << endl;

    둘

    charStack.push('e');
    charStack.push('n');
    charStack.push('t');
    charStack.push('h');
    charStack.push('u');
    charStack.push('s');
    charStack.push('i');
    charStack.push('a');
    charStack.push('s');
    charStack.push('t');
    charStack.push('i');
    charStack.push('c');
    charStack.printStack();

    charStack.sort();
    charStack.printStack();

    셋

    int one [] = {1, 11, 27, 31, 36};
    int two [] = {9, 100, 56, 76, 89, 12, 92, 66, 28, 10};


    intStack.push_range(one, sizeof(one) / sizeof(one[0]));
    intStack.printStack();

    intStack.push(30);
    intStack.push_range(one, sizeof(one) / sizeof(one[0]));
    intStack.printStack();

    intStack.push_range(two, sizeof(two) / sizeof(two[0]));
    intStack.printStack();

    넷

    for(int i = 1; i < 5; i++) {
        intStack.push(i);
    }
    for(int i = 50; i < 57; i++) {
        intStack.pushE(1, i);
        intStack.pushE(i, 10);
    }
    intStack.printStack();

    다섯

    int one [] = {35, 36, 37, 38, 39};
    int two [] = {999, 888, 777};

    for(int i = 0; i < 5; i++) {
        intStack.push(i);
    }

    intStack.push_rangeE(3, one, sizeof(one) / sizeof(one[0]));
    intStack.push_rangeE(20, one, sizeof(one) / sizeof(one[0]));
    intStack.printStack();

    intStack.push_rangeE(10, two, sizeof(two) / sizeof(two[0]));
    intStack.printStack();

    여섯

    for(int i = 1; i < 12; i++) {
        intStack.push(i);
    }
    intStack.printStack();

    for(int i = 0; i < 3; i++) {
        intStack.popE();
    }
    intStack.printStack();

    일곱

    intStack.popE(3);
    for(int i = 1; i < 12; i++) {
        intStack.push(i);
    }
    intStack.printStack();

    for(int i = 0; i < 5; i++) {
        intStack.popE(1);
    }
    intStack.printStack();
    intStack.popE(2);
    intStack.popE(11);
    intStack.printStack();






