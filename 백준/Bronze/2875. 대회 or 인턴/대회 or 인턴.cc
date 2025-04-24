#include <iostream>
using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;

    for(int i = 0 ; i< k ; i++){
        if(n/(float)m > 2){
            n--;
        }
        else{
            m--;
        }
    }

    int minn = n/2 < m ? n/2 : m;
    cout << minn;
}