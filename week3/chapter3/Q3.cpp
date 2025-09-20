#include <iostream>
using namespace std;

int main() {
    // <1> 두 변수 name과 age를 받아 My name is [name] and I am [age] years old.를 출력하는 코드를 작성하라.

    // C++
    string name;
    cin >> name;

    int age;
    cin >> age;

    cout << "My name is " << name << " and I am " << age << " years old." << endl;

    // Python
    // name = input()
    // age = input()
    // print(name)
    //
    //
    // print(f"My name is {name} and I am {age} years old.")



    // <2> 변수 a = 5와 b = 3를 선언하고 a + b = 8 형식으로 출력하는 코드를 작성하라.

    // C++
    int a = 5;
    int b = 3;

    cout << "a + b = " << a + b << endl;

    // Python
    // a = 5;
    // b = 3;
    //
    // print(f"a + b = {a+b}")

    // 사용자로부터 이름을 입력받아 "Welcome, [name]!"을 출력하는 코드를 작성하라.
    // C++
    string name2;
    cin >> name2;

    cout << "Welcome, " << name2 << "!" << endl;

    // Python
    // name2 = input()
    // print(f"Welcome, {name2}!")


}