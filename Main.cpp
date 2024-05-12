#include <iostream>
using namespace std;

#include "MyStack.h"

// 예외 처리를 담당하는 함수
template <typename Func>
void Exceptions(Func f) {
    try {
        f(); // 전달된 함수 실행
    }  catch(const char* s) {
        cout << "예외발생 : " << s << endl;
    }
} 

int main(void) {
    // MyStack<int> intStack;
    // MyStack<char> charStack;
    
}