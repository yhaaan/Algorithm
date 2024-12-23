#include <iostream>
using namespace std;

int main() {
    float w,h;
    cout.setf(ios_base::fixed);
    cout.precision(1);
    cin >> w >> h;
    cout << w*h/2.0;
    return 0;
}