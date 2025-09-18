#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int y = 2024;
    int m = 8;
    n--;
    n = n*7;
    y += (m+n-1)/12;
    m = (m + n)%12;
    if(m==0) m=12;
    cout << y << " " << m;
    
}