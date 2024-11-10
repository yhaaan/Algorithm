#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N,T,P,size[6]; //input values
    int set_t=0,set_p,one_p; //output values 
    
    cin >> N;
    for(int i =0;i<6;i++) cin >> size[i];
    cin >> T >> P;
    
    for(int i =0;i<6;i++){
        set_t += ceil(size[i]/static_cast<double>(T));
    }    
    set_p = N/P;
    one_p = N%P;
    cout << set_t <<endl<<set_p <<" "<<one_p;
    
    return 0;
}
