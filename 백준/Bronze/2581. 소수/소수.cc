#include <iostream>
using namespace std;

bool isprime(int n){
    for(int i = 2 ; i  < n ; i++){
        if(n%i == 0) return false;
    }
    return true;
}


int main() {
    int m,n;
    cin >> m >> n;
    int mnum;
    bool minflag = false;
    bool no = true;
    int sum=0;
    for(int i = m; i <= n; i++){
        if(i==1) continue;
        if(isprime(i)){
            no = false;
            if(minflag == false){
                mnum = i;
                minflag = true;
            }
            sum += i;
        }
    }

    if(no){
        cout << -1 ;
        return 0;
    }

    cout << sum << endl << mnum; 
}