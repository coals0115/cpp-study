#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "==================================================" << endl;
    cout << "반복문 연습 문제 - C++" << endl;
    cout << "==================================================" << endl;
    
    // 문제 1: 1부터 10까지 숫자 출력 (for문 사용)
    cout << "\n문제 1: 1부터 10까지 숫자 출력" << endl;
    cout << "------------------------------" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // 문제 2: 1부터 입력받은 정수까지의 합 (do-while문 사용)
    cout << "\n문제 2: 1부터 입력받은 정수까지의 합" << endl;
    cout << "------------------------------" << endl;
    int n;
    cout << "숫자를 입력하세요: ";
    cin >> n;
    
    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);
    
    cout << "1부터 " << n << "까지의 합: " << sum << endl;
    
    // 문제 3: 1부터 100까지 3의 배수 출력 (while문과 조건문 사용)
    cout << "\n문제 3: 1부터 100까지 3의 배수 출력" << endl;
    cout << "------------------------------" << endl;
    int num = 3;  // 첫 번째 3의 배수부터 시작
    int count = 0;
    
    while (num <= 100) {
        cout << num << " ";
        count++;
        if (count % 10 == 0) {  // 10개마다 줄바꿈
            cout << endl;
        }
        num += 3;  // 다음 3의 배수로 이동
    }
    cout << endl;
    
    // 문제 4: 0을 입력할 때까지 정수 입력받고 평균 계산 (for문 무한루프 사용)
    cout << "\n문제 4: 정수들의 평균 계산 (0 입력시 종료)" << endl;
    cout << "------------------------------" << endl;
    
    int total = 0;
    int inputCount = 0;
    int input;
    
    for (;;) {  // 무한 for 루프
        cout << "정수를 입력하세요 (0 입력시 종료): ";
        cin >> input;
        
        if (input == 0) {
            break;
        }
        
        total += input;
        inputCount++;
    }
    
    if (inputCount > 0) {
        double average = static_cast<double>(total) / inputCount;
        cout << "입력한 " << inputCount << "개 수의 평균: " 
             << fixed << setprecision(2) << average << endl;
    } else {
        cout << "입력된 수가 없습니다." << endl;
    }
    
    cout << "\n프로그램 종료!" << endl;
    
    return 0;
}