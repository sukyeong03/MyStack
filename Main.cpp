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

    char one[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    char two[] = {'p', 'r', 'o', 'g', 'r', 'a', 'm'};

    charStack.push('Y');
    charStack.push_range(one, sizeof(one)/sizeof(one[0]));
    charStack.printStack();

    charStack.push_range(two, sizeof(two)/sizeof(two[0]));
    charStack.printStack();

    넷

    for(int i = 0; i < 5; i++) {
        charStack.push(65 + i);
    }
    for(int i = 90; i > 83; i--) {
        charStack.pushE(1, i);
        charStack.pushE(i, 'R');
    }
    charStack.printStack();

    다섯

    char one[] = {'a', 'b', 'c', 'd'};
    char two[] = {'x', 'y', 'z'};
    char three[] = {'p', 'r', 'o', 'g', 'r', 'a', 'm'};

    charStack.push_rangeE(0, two, sizeof(two)/sizeof(two[0]));
    charStack.printStack();
    
    charStack.push_rangeE(1, one, sizeof(one)/sizeof(one[0]));
    charStack.push_rangeE(20, two, sizeof(two)/sizeof(two[0]));
    charStack.printStack();

    charStack.push_rangeE(7, three, sizeof(three)/sizeof(three[0]));
    charStack.printStack();

    여섯

    charStack.popE();
    for(int i = 65; i < 76; i++) {
        charStack.push(i);
    }
    charStack.printStack();

    for(int i = 0; i < 4; i++) {
        charStack.popE();
    }
    charStack.printStack()

    일곱

    charStack.popE(3);
    for(int i = 65; i < 76; i++) {
        charStack.push(i);
    }
    charStack.printStack();

    for(int i = 0; i < 4; i++) {
        charStack.popE(1);
    }
    charStack.popE(3);
    charStack.popE(4);
    charStack.printStack();






