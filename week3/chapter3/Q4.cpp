#include <iostream>
using namespace std;

int main() {
    // Python: 문자열 "123"을 정수로 변환하여 1 더한 값을 출력하는 코드를 작성하라.
    // num = "123"
    // print(num)
    //
    // print(int(num) + 1)


    // C++: 문자열 "456"을 int로 변환해 출력하는 방법을 코드로 작성하라.
    string a = "456";
    int b = std::stoi(a);
    cout << b << endl;

    // C++: int 변수와 double 변수를 더할 때 어떤 일이 일어나는지 간단히 설명하고, 예제 코드를 작성하라.
    int a2 = 10.3;
    double b2 = 5.3;
    cout << a2 + b2 << endl;


}