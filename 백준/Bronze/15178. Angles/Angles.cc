#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a ,b,c;
    int sum;
    for(int i =0; i < n ; i++){
        sum =0;
        cin >> a>>b>>c;
        sum = a+b+c;
        if(sum == 180){
            cout << a << " " << b << " " <<c <<" "<< "Seems OK\n";
        }
        else{
            cout << a << " " << b << " " <<c <<" "<< "Check\n";
        }
    }
}