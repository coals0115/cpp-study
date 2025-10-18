// 2. 반환값
// 매개 변수로 두개의 정수를 받아서, 최대값을 '반환'하는 함수 maxValue

#include <iostream>
using namespace std;

// 함수 선언
int maxValue(int a, int b);

int main() {
    int num1, num2;

    cout << "첫 번째 정수를 입력하세요: ";
    cin >> num1;
    cout << "두 번째 정수를 입력하세요: ";
    cin >> num2;

    // 함수 호출 및 반환값 받기
    int result = maxValue(num1, num2);

    cout << "최대값: " << result << endl;

    return 0;
}

// 함수 정의
int maxValue(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
