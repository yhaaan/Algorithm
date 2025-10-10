#include <iostream>
using namespace std;

int main() {
    int bit;
    bool has_failure = false;
    for (int i = 0; i < 8; i++) {
        
        cin >> bit;
        if (bit == 9) {
            has_failure = true;
        }
    }

    if (has_failure) {
        cout << "F" << endl;
    } else {
        cout << "S" << endl;
    }

    return 0;
}