
#include <iostream>
using namespace std;

int main() {
    string id, password;
    cin >> id >> password;

    if (id == "admin" && password == "1234") {
        cout << "Login success" << endl;
    }
    else if (id == "admin" && password != "1234") {
        cout << "Wrong password" << endl;
    }
    else {
        cout << "No such user" << endl;
    }
    
    return 0;
}