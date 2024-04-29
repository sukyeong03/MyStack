## 스택(Stack) 클래스 구현하기

1. template을 사용하여 제네릭 클래스 구현하기
   : 템플릿은 자료형에 구애받지 않은 함수 또는 클래스

2. malloc(), free() 사용X -> new, delete 사용O

3. 모든 멤버 변수는 private, 모든 멤버 함수는 private 또는 public

4. 모든 멤버 변수와 멤버 함수는 클래스안에서만 선언과 정의가 가능
   (#define 사용불가, 전역변수 사용불가)

5. 입출력 함수는 C++형태만 사용가능(C 입출력 함수 사용 불가)

6. 아래 함수 구현하기

   > int capacity() // stackmaxsize  
   > int size() // stack size - top의 위치  
   > void printStack() // 첨부된 코드 C++에 맞춰서  
   > isEmpty() -> true, false 사용  
   > isFull() -> true, false 사용  
   > void sort() // 오름차순 정렬
   >
   > 제네릭 클래스로 구현할때 영향을 받는 함수들 (함수 오버로딩, 제너릭 함수로 만들면 됨)  
   > void push(data-type value)  
   > void push(int location, data-type value)  
   > void push_range(data-type values[], int arrSize)
   > void push_range(int location, data-type values[], int arrSize)
   >
   > data-type pop()  
   > data-type pop(int location)

7. 기한은 5월 20일까지

8. 예제는 charter과 int형만 보여줌
# MyStack
