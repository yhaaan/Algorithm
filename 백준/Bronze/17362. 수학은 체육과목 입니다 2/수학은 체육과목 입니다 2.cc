#include <iostream>
using namespace std;

int main() {
    int p[8] = {1,2,3,4,5,4,3,2};

    int n ;
    cin >> n;
    int index = (n-1)%8;

    cout << p[index];
}