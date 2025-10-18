// 4. 재귀 함수
// 정수 n을 입력받아 팩토리얼을 반환하는 재귀 함수 factorial

#include <iostream>
using namespace std;

// 함수 선언
int factorial(int n);

int main() {
    int num;

    cout << "팩토리얼을 계산할 정수를 입력하세요: ";
    cin >> num;

    if (num < 0) {
        cout << "음수는 팩토리얼을 계산할 수 없습니다." << endl;
    } else {
        int result = factorial(num);
        cout << num << "! = " << result << endl;
    }

    return 0;
}

// 재귀 함수 정의
int factorial(int n) {
    // 기저 조건 (base case)
    if (n == 0 || n == 1) {
        return 1;
    }
    // 재귀 호출
    return n * factorial(n - 1);
}
