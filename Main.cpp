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
    MyStack<int> intStack; // 정수형 스택
    MyStack<char> charStack; // 문자형 스택
    
    // 람다 함수를 사용하여 push 함수 호출을 래핑하여 전달
    Exceptions([&]() {
        intStack.push(0, 10);
    });

}