#include <iostream>
using namespace std;

int main() {
    int k = 0;
    int ans=5000;
    while(cin>>k){
       
        if(k == 1){
            ans -=500;
        }
        else if(k == 2){
            ans -=800;
        }
        else if(k == 3){
            ans -=1000;
        }
    }
    cout << ans;
}