#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int sum = 0;
    int key = 0;
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == '*') {
            key = (i % 2 == 0) ? 1 : 3;
            continue;
        }

        sum += (str[i] - '0') * ((i % 2 == 0) ? 1 : 3);
    }

    int check_digit = str.back() - '0';
    //cout << "sum : " << sum << endl;
    //cout << "check : " << check_digit << endl;
    for (int i = 0; i < 10; i++) {
        if ((sum + key * i + check_digit) % 10 == 0) {
            cout << i;
            return 0;
        }
    }
}
