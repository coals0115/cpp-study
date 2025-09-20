#include <iostream>
using namespace std;

int main() {
    // int, double, char 타입 변수를 각각 선언하고, 초기값을 넣어 출력하는 코드를 작성하라(C++만).

    // C++
    int a = 10;
    double b = 5.0;
    char c = 'A';

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;


    // Python
    // a = 10;
    // b = 5.0;
    // c = 'A'
    //
    // print(a)
    // print(b)
    // print(c)

    // 변수 a = "10"과 b = 5를 선언하고 a + b를 실행했을 때 오류가 나는 이유를 설명하고, 오류 없이 숫자 덧셈을 하는 코드를 작성하라.
    string a2 = "10";
    double b2 = 5;


    // std::stod (string to double)
    // std::stoi (string to integer)
    int a3 = std::stoi(a2);
    cout << a3 + b2 << endl;

    // Python
    // a2 = "10"
    // b2 = 5
    //
    // print(int(a2) + b2)

    // 변수 c에 문자 'A'를 저장하고, 해당 문자의 ASCII 값을 출력하는 코드를 작성하라.
    char c2 = 'A';
    cout << "문자 A의 ASCII 값: " << (int) c2 << endl;

}
