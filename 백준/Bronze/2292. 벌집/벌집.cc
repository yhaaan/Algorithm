#include <iostream>
#include <string>
using namespace std;

int sum(int n);

int main() {
    int N;
    int check;
    cin >> N;
    for(int i= 0; i<N;i++){
        check = 6*sum(i)+1;
        if(N <= check){
            cout << i+1 << endl;
            break;
        }
    }  
}

int sum(int n){
    int result = 0;
    for(int i = 0; i<= n ; i++){
        result += i;
    }
    return result;
}