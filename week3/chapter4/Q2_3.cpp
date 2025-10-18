#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // 3개의 정수 입력받기
    cin >> a >> b >> c;

    // swap을 이용한 정렬
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // 결과 출력
    cout << a << " " << b << " " << c << endl;

    return 0;
}