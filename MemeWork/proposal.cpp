// This was to challenge a Java user;

#include <iostream>

using namespace std;

int main() {
    string response;

    cout << "Will You Go On A Date With Me? ";
    cin >> response;

    if (response == "yes") {
        cout << "Yayyyy";
    } else {
        while (response == "no") {
            cout << "Are You Sure?  ";
            cin >> response;
        }
        cout << "Yayyyyy";
    }

    return 0;
}