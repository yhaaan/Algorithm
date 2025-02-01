#include <iostream>
#include <string>
using namespace std;

int main() {
    int x,y,w,h;
    cin >> x>> y>> w>>h;
    int mx,my,min;
    mx = x < w-x ? x : w-x;
    my = y < h-y ? y : h-y;
    min = mx<my ? mx : my;
    cout << min;
    
    
}