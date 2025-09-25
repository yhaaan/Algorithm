#include <iostream>
using namespace std;

int cal(int a, int b, int c, int d, int e){
    return a*6 + b*3 + c*2 + d*1 + e*2; 
}

int main() {
    int a,b,c,d,e;
    for(int i =0;i< 2; i++){
        cin >>a>>b>>c>>d>>e;
        cout << cal(a,b,c,d,e);
        cout << " ";
    }
}