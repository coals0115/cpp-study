#include<iostream>
using namespace std;

bool isDigit(char input);
bool isAlphabet(char input);

int main() {
    char c2;
    cout << "문자 하나를 입력하세요: ";
    cin >> c2;

    if (isDigit(c2)) {
        cout << "Digit" << endl;
    } else if (isAlphabet(c2)) {
        cout << "Alphabet" << endl;
    } else {
        cout << "Other" << endl;
    }

    return 0;
}

bool isDigit(char input) {
    if (input >= '0' && input <= '9') {
        return true;
    }
    return false;
}

bool isAlphabet(char input) {
    int result = static_cast<unsigned char>(input);
    if ((result >= 'a' && result <= 'z') || (result >= 'A' && result <= 'Z')) {
        return true;
    }
    return false;
}
