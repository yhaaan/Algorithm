#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> b;
    for(int i =100; i<=9000; i+=100){
        if(i+ i*0.1 == b){
            cout << i;
            return 0;
        }
    }
}