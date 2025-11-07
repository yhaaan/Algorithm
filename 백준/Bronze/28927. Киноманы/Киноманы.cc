#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int k[2];
    for(int i = 0; i < 2; i++){
        cin >> a>>b>>c;
        k[i]= a*3 + b*20 + c*120;
    }

    if(k[0] < k[1]) cout << "Mel";
    else if(k[0] > k[1]) cout << "Max";
    else cout <<"Draw";
}