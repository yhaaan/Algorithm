#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
    int n,m,a,b;
    vector<int> v;
    cin >> n >> m;
    for(int i = 0 ; i < m; i++){
        cin >> a>>b;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end(), greater<int>());


    int res = 0;
    for(int x : v){
        //cout << x <<" " << m <<endl;
        if(x >= n) m --;
        if(x < n && m > 1) {
            res += n-x;
            m--;
        }
    }

    cout << res;
}