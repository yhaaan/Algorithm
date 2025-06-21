#include <iostream>
using namespace std;


int main(void){
    float a,b;
    cin >> a >> b;
    if(a*(1-b*0.01f) >= 100){
        cout << 0;
    }    
    else
    cout << 1;

    
}
