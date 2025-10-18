// 1. 함수 정의 및 호출
// 정수 두 개를 매개 변수로 받아 합을 출력(반환이 아님)하는 sum 함수

#include <iostream>
using namespace std;

// 함수 선언
void sum(int a, int b);

int main() {
    int num1, num2;

    cout << "첫 번째 정수를 입력하세요: ";
    cin >> num1;
    cout << "두 번째 정수를 입력하세요: ";
    cin >> num2;

    // 함수 호출
    sum(num1, num2);

    return 0;
}

// 함수 정의
void sum(int a, int b) {
    cout << "두 수의 합: " << a + b << endl;
}
