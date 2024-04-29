#include <iostream>
using namespace std;

#include "MyStack.h"

int main(void) {
    MyStack<int> intStack;
    try{
        intStack.push(100);
        intStack.push(200);
        cout << intStack.pop() << endl;
        cout << intStack.pop() << endl;
        cout << intStack.pop() << endl;
    }
    catch(const char* s) {
        cout << "예외발생 : " << s << endl;
    }
}