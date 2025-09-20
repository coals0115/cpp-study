#include <iostream>
using namespace std;

int main() {
    // # 초급 (난이도 1)
    // ## 출력하기 "Hello, World!"를 출력하는 프로그램을 작성하시오.
    cout << "Hello, World!" << endl;

    // ## 변수와 자료형 정수형 변수 x에 10을 저장하고, 이를 출력하는 프로그램을 작성하시오.
    int x = 10;
    cout << x << endl;

    // ## 입력받고 출력하기 사용자로부터 두 정수를 입력받고, 그 합을 출력하는 프로그램을 작성하시오.
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;

    // # 중급 (난이도 2)
    // ## 연산자 활용 두 정수 a와 b를 입력받고, a와 b의 합, 차, 곱, 몫, 나머지를 각각 출력하는 프로그램을 작성하시오.
    int a2, b2;
    cin >> a2 >> b2;

    cout << "a + b = " << a2 + b2 << endl;
    cout << "a - b = " << a2 - b2 << endl;
    cout << "a * b = " << a2 * b2 << endl;
    cout << "a / b = " << a2 / b2 << endl;
    cout << "a % b = " << a2 % b2 << endl;

    // ## 자료형 변환 실수형 변수 x에 5.7을 저장하고, 이를 정수형으로 변환하여 출력하는 프로그램을 작성하시오.
    double x2 = 5.7;
    cout << (int) x2 << endl;

    // ## 상수와 표현식 원의 반지름 r을 입력받아, 원의 넓이 πr^2를 출력하는 프로그램을 작성하시오. (π는 3.14로 사용)
    double r;
    cin >> r;
    const double PI = 3.14;
    cout << PI * r * r << endl;



}