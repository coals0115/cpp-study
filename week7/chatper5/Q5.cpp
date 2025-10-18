// 5. 오버로딩
// 같은 이름 printValue 함수로 파라미터로 정수 또는 문자열을 받는 함수를 각각 만드시오
// 즉, 정수를 출력하는 것과 문자열을 출력하는 것을 오버로딩하시오

#include <iostream>
#include <string>
using namespace std;

// 함수 선언 (오버로딩)
void printValue(int value);
void printValue(string value);

int main() {
    int num = 100;
    string str = "Hello, C++!";

    cout << "정수 출력: ";
    printValue(num);

    cout << "문자열 출력: ";
    printValue(str);

    printValue(42);
    printValue("Overloading Test");

    return 0;
}

// 정수를 출력하는 함수
void printValue(int value) {
    cout << "정수 값: " << value << endl;
}

// 문자열을 출력하는 함수
void printValue(string value) {
    cout << "문자열 값: " << value << endl;
}
