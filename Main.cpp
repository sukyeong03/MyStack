#include <iostream>
using namespace std;

#include "MyStack.h"

int main(void) {
    MyStack<char> intStack;
    try{
        intStack.push('a');
        intStack.push('b');
        cout << intStack.pop() << endl;
        cout << intStack.pop() << endl;
        cout << intStack.pop() << endl;
    }
    catch(const char* s) {
        cout << "예외발생 : " << s << endl;
    }
}