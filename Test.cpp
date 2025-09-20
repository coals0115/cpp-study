#include <iostream>
using namespace std;
#define SIZE 10

int main() {
    int arr[SIZE]; // SIZE가 10으로 치환됨

    // 배열에 값 넣기
    for(int i = 0; i < SIZE; i++) {
        arr[i] = i + 1; // 1, 2, 3, ..., 10
    }

    // 배열 출력하기
    cout << "배열 arr: ";
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}