#include <iostream>
// using namespace std;

// DEBUG가 정의된 경우에만 코드가 컴파일됨
#ifdef TETS
    std::cout << "디버그 모드입니다.\n";
#endif

int main() {
    std::cout << "Hello, World!";
    int a = 3;

    cin >> a;

    cout << "a = " << a << endl;

    // int b;
    // cin >> b;
    
    return 0;
}
