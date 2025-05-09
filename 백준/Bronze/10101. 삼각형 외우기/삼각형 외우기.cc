#include <iostream>
using namespace std;

int main() {
    int a , b ,c;
    cin >> a >>b >>c;
    int sum = a+b+c;

    if(a==b && b==c && sum == 180) {
        cout << "Equilateral";
    }
    else if(sum == 180 && (a==b || b==c || a==c)){
        cout << "Isosceles";
    }
    else if(sum == 180 && (a!=b || b!=c || a!=c)){
        cout << "Scalene";
    }
    else
        cout << "Error";
}