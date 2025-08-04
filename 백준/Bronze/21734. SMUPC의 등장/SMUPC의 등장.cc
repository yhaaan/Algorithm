#include <iostream>
#include <string>
using namespace std;


int getN(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /=10;
    }

    return sum;
}


int main() {
    string str;
    cin >>str;
    for(int i =0 ; i < str.length(); i++){
        int k = getN(str[i]);
        for(int j = 0; j < k ; j++){
            cout << str[i];
        }
        cout << endl;
    }
}