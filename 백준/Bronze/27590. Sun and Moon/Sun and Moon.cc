#include <iostream>
using namespace std;

int main() {
    int ds, ys, dm, ym;
    cin >> ds >> ys;
    cin >> dm >> ym;

    for (int year = 1; ; year++) {
        if ((year + ds) % ys == 0 && (year + dm) % ym == 0) {
            cout << year << endl;
            break;
        }
    }

    return 0;
}