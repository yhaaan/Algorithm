#include <iostream>
using namespace std;

int s[5] ={0,0,0,0,0};
int main() {
    int t;
    cin >> t;
    for(int i =0 ; i < t; i++){
        cin >> s[i];
    }

    int a,b,c;
    if(s[0] > s[2]){
        a = (s[0] - s[2])*508;
    }
    else{
        a = (s[2] - s[0])*108;
    }

    if(s[1] > s[3]){
        b = (s[1] - s[3]) * 212;
    }
    else{
        b = (s[3] - s[1]) * 305;
    }

    if(t == 5) c = s[4]*707;
    else c= 0;

    cout << (a+b+c)*4763;
}