#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int totalRows = 2 * n - 1;

    for (int i = 0; i < totalRows; i++) {
        int stars = i < n ? i + 1 : totalRows - i;
        int spaces = 2 * (n - stars);

        // 왼쪽 별
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        // 가운데 공백
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        // 오른쪽 별
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
