#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,w,h,l;
    cin >> n>>w>>h>>l;
    int k = (floor)(w/l) * (floor)(h/l);
    if(n < k)
        k = n;
    cout << k;
}