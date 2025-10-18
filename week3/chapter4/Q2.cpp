// 5. 오버로딩
// 같은 이름 printValue 함수 파라미터로 정수 또는 문자열을 받는 함수 만들기
// 즉, 정수를 출력하는 것과 문자열을 출력하는 것을 오버로딩

#include<iostream>
using namespace std;


// 함수 선언(오버로딩)
void printValue(int value);
void printValue(string value);

int main() {
    int num = 100;
    string str = "Hello, C++!";

    // 정수 버전 함수 호출
    cout << "정수 출력: ";
    printValue(num);

    // 문자열 버전 함수 호출
    cout << "문자열 출력: ";
    printValue(str);

    // 리터럴로 직접 호출
    printValue(42);
    printValue("Overloading Test");

    return 0;
}

void printValue(int value) {
    cout << "정수 값: " << value << endl;
}

void printValue(string value) {
    cout << "문자열 값: " << value << endl;
}

