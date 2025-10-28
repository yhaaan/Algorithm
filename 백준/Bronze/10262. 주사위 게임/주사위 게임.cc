#include <iostream>
using namespace std;

int main() {
    float a1,a2,b1,b2;
    float w[2];
    for(int i =0 ; i<2 ; i++){
        cin >> a1>>a2>>b1>>b2;
        w[i] = (a1+b1)/2 + (a2+b2)/2;
        
    }
    if(w[0] > w[1])
        cout <<"Gunnar";
    else if(w[0]<w[1])
        cout << "Emma";
    else
        cout << "Tie";
}