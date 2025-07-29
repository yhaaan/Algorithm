#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[7] = {"SUN","MON" , "TUE","WED","THU","FRI","SAT"};
    int x,y;
    int k = 0;
    cin >> x>>y;
    if(x == 1) k = 0;
    if(x == 2) k = 3;
    if(x == 3) k = 3;
    if(x == 4) k = 6;
    if(x == 5) k = 1;
    if(x == 6) k = 4;
    if(x == 7) k = 6;
    if(x == 8) k = 2;
    if(x == 9) k = 5;
    if(x == 10) k = 0;
    if(x == 11) k = 3;
    if(x == 12) k = 5;
    cout << str[(y+k)%7];
}