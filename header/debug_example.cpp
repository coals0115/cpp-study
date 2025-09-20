#include <iostream>
#define DEBUG

int main() {
    std::cout << "프로그램이 시작되었습니다.\n";

    // DEBUG가 정의된 경우에만 코드가 컴파일됨
    #ifdef DEBUG
        std::cout << "디버그 모드입니다.\n";
        std::cout << "디버그 정보: 변수 초기화 완료\n";
    #endif

    int result = 10 + 20;
    std::cout << "계산 결과: " << result << "\n";

    #ifdef DEBUG
        std::cout << "디버그 정보: 계산이 완료되었습니다.\n";
    #endif

    std::cout << "프로그램이 종료됩니다.\n";

    return 0;
}