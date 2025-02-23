#include <iostream>
using namespace std;

int pira(int n);

int main() {
    int n;
    cin >> n;
    while(n != 0){
        cout << pira(n) <<endl;
        cin >> n;
    } 
}

int pira(int n){
    if(n == 1)
        return 1;
    return pira(n-1) + n;
}