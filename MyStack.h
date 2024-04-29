#ifndef MYSTACK_H
#define MYSTACK_H

template <typename T>
class MyStack {
    T *Stack;
    T top;
    int Size; // 스택이 늘어난 개수
    const int STACK_SIZE; // stack의 기본 크기와 사이즈를 늘릴때 크기
    bool isEmpty(); // top == -1인지
    bool isFull(); // top == capacity()인지
    void quickSort(T arr[], int low, int high); // 퀵 정렬
    int partition(T arr[], int low, int high); // 분할
public: 
    MyStack(); // 생성자 실행시 STACJ_SIZE 10으로 동적 할당
    ~MyStack(); // 소멸자 실행 시 스택 반환
    int capacity(); // Stack Max Size
    int size(); // Stack Max Size - top
    void printStack(); // Stack capacity,  저장값 출력
    void sort(); // 오름차순 정렬

    void push(T value); // top + 1에 push
    void push(int location, T value); // location에 값 push
    void push_range(T values[], int arrSize); // top + 1에 값 push
    void push_range(int location, T values[], int arrSize); // location에 값 push

    T pop(); // top에 pop
    T pop(int location); // location pop
};

#endif