#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i =0; i < n*2-1; i++){
        if(i < n){
            for(int j = 0; j < i ; j++)
                cout << " ";
            for(int j = 0; j < n*2-1-i*2 ; j++)
                cout << "*";
            
        }
        else{
            for(int j = 0; j < 2*n-i-2  ; j++)
                cout << " ";
            for(int j = 0; j < (i-n+2)*2-1 ; j++)
                cout << "*";
            
        }
        cout << "\n";
    }
}

//0 = 3, 1 = 2 2 =1 3 = 0