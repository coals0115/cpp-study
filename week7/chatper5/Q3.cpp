// 3. 기본값 매개변수
// 정수를 하나 입력받고, 매개 변수에 5를 더한 결과를 출력하는 addFive 함수
// 파라미터를 입력하지 않으면 5를 출력한다

#include <iostream>
using namespace std;

// 함수 선언 (기본값 매개변수 = 0)
void addFive(int num = 0);

int main() {
    int input;

    cout << "정수를 입력하세요: ";
    cin >> input;

    // 파라미터를 전달하여 호출
    cout << "입력값으로 호출: ";
    addFive(input);

    // 파라미터 없이 호출 (기본값 사용)
    cout << "파라미터 없이 호출: ";
    addFive();

    return 0;
}

// 함수 정의
void addFive(int num) {
    cout << num + 5 << endl;
}
