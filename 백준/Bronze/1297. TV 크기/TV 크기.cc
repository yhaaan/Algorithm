#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double d,h,w;
    cin >> d>>h>>w;
    double x;
    x = sqrt(d*d/(w*w + h*h));
    cout << floor(h*x) << " " <<floor(w*x);
}