#include <iostream>
using namespace std;

int main() {
    int k;
    int a,b;
    cin >> k;
    cin >> a>>b;
    float d = (a-b)/(float)2;

    cout <<k*k - d*d;
}