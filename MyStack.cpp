#include <iostream>
#include "MyStack.h"

template <typename T>
MyStack<T>::MyStack() : STACK_SIZE(10) {
    Stack = new T[STACK_SIZE];
    top = -1;
    Size = STACK_SIZE;
}

template <typename T>
MyStack<T>::~MyStack() {
    delete [] Stack;
}

template <typename T>
int MyStack<T>::capacity() {
    return Size * STACK_SIZE;
}

template <typename T>
int MyStack<T>::size() {
    return top + 1;
}

template <typename T>
bool MyStack<T>::isEmpty() {
    if(top == -1) return true;
    else return false;
}

template <typename T>
bool MyStack<T>::isFull() {
    if(top % STACK_SIZE == 9) return true;
    else return false;
}

template <typename T>
void MyStack<T>::printStack() {
    int i;
    std::cout << " STACK SIZE [" << STACK_SIZE * Size << "]" << std::endl;
    std::cout << " STACK [ " << std::endl;
    for(i = 0; i <= top; i++)
        std::cout << Stack[i] << " ";
    std::cout << " ] "<< std::endl; 
}

template <typename T>
void MyStack<T>::sort() {
    if (isEmpty() || size() == 1) // 스택이 비어있거나 요소가 1개인 경우 반환
        return;

    // 퀵 정렬 알고리즘 구현
    int low = 0;
    int high = top;
    quickSort(Stack, low, high);
}

template<typename T>
void MyStack<T>::quickSort(T arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // 피벗 위치

        // 피벗을 기준으로 좌우 부분 배열을 각각 재귀적으로 정렬
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

template<typename T>
int MyStack<T>::partition(T arr[], int low, int high) {
    T pivot = arr[high / 2]; 
    int i = low - 1; // 피벗보다 작은 요소들의 마지막 인덱스

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]); // 피벗을 올바른 위치로 이동합니다.
    return i + 1; // 피벗의 위치를 반환합니다.
}

template <typename T>
T MyStack<T>::pop() {
    if(isEmpty())
    { //스택이 비어있을 때 예외 발생
        throw "Stack is empty";
    }
    else
    {
        int i;
        T value, *temp;

        if(this->top % STACK_SIZE == 0)
        {
            std::cout << " CHANGE STACK" << std::endl;
            value = this->Stack[this->top];
            temp = new T [STACK_SIZE * (this->Size - 1) * sizeof(T)];
            for(i = 0; i < top; i++)
                temp[i] = this->Stack[i];
            delete this->Stack;
            this->Stack = new T [STACK_SIZE * (this->Size - 1) * sizeof(T)];

            for(i = 0; i < this->top; i++)
                this->Stack[i] = temp[i];
            delete temp;

            this->top--;
            this->Size--;
            
            return value;
        }
        else return this->Stack[this->top--];
    }
}

template <typename T>
T MyStack<T>::pop(int location) {
    if(isEmpty())
    { //스택이 비어있을 때 예외 발생
        throw "Stack is empty";
    }
    else
    {
        int i;
        T value, *temp;

        if(location < 0 || location > top)
        { //인덱스가 스택 범위 내 있지 않을때
            throw "POP INDEX ERROR";
        }

        if(this->top % STACK_SIZE == 0)
        {
            std::cout << " CHANGE STACK" << std::endl;
            value = this->Stack[this->top];
            temp = new T [STACK_SIZE * (this->Size - 1) * sizeof(T)];
            for(i = 0; i < top; i++)
                temp[i] = this->Stack[i];
            delete this->Stack;
            this->Stack = new T [STACK_SIZE * (this->Size - 1) * sizeof(T)];

            for(i = 0; i < this->top; i++)
                this->Stack[i] = temp[i];
            delete temp;

            this->top--;
            this->Size--;
            
            return value;
        }
        else return this->Stack[this->top--];

    }
} 