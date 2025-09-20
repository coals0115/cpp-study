#include<iostream>
using namespace std;

int main() {
    // 1. 사용자로부터 정수를 하나 입력받아, 그 수가 양수이면 "Positive"를 출력하는 프로그램을 작성하라.
    int num;
    cin >> num;

    if (num > 0) {
        cout << "Positive";
    }

    // 2. 정수를 입력받아, 짝수이면 "Even"을 출력하고 홀수이면 "Odd"를 출력하는 프로그램을 작성하라(힌트: % 연산자 사용).
    int num2;
    cin >> num2;

    if (num2 % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }

    // 3. 시험 점수(0~100)를 입력받아 다음과 같이 학점을 출력하라.
    // 90점 이상: A || 80점 이상: B || 70점 이상: C || 그 외: F
    int score;
    cin >> score;

    char result;
    if (score >= 90) {
        result = 'A';
    } else if (score >= 80) {
        result = 'B';
    } else if (score >= 70) {
        result = 'C';
    } else {
        result = 'F';
    }

    cout << result;

    // 4. 두 개의 정수를 입력받아, 두 수가 모두 짝수이면 "Both even"을 출력하고, 하나만 짝수이면 "One even", 둘 다 홀수이면 "Both odd"를 출력하라.
    int a3;
    int b3;
    cin >> a3 >> b3;

    bool a_even = a3 % 2;
    bool b_even = b3 % 2;

    cout << "a_even: " << a_even << ", b_even: " << b_even << endl;

    // 1이면 홀수, 0이면 짝수
    if (a_even + b_even == 0) {
        cout << "Both even" << endl;
    } else if (a_even + b_even == 1) {
        cout << "One even" << endl;;
    } else if (a_even + b_even == 2) {
        cout << "Both odd" << endl;;
    }

    // 5. 정수 3개를 입력받아, 세 수 중 가장 큰 수를 출력하는 프로그램을 작성하라. 단, 조건문만 사용하고 max() 함수나 sort 등을 사용하지 말 것.
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int max_num;

    if (num1 >= num2 && num1 >= num3) {
        // num1이 num2와 num3보다 모두 크거나 같으면 => num1이 가장 큰 수
        max_num = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        // num2가 num1과 num3보다 모두 크거나 같으면 => num2가 가장 큰 수
        max_num = num2;
    } else {
        // 위의 두 조건에 해당하지 않으면 => num3이 가장 큰 수
        max_num = num3;
    }

    std::cout << "가장 큰 수는 " << max_num << "입니다." << std::endl;



}