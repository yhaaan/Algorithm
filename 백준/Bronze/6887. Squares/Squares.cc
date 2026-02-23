#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    int a;
    cin >> a;
    for(int i = 0; i < 10000 ; i ++){
        if(i*i > a ){
            cout << "The largest square has side length " << i-1<<".";
            break;
        }
    }
}