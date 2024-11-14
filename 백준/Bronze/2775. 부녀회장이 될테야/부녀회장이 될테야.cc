#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int fnum(int k,int n);

vector<vector<int>> vec;

int main() {
    vector<pair<int,int>> floor;
    int T,k,n,maxk=0;
    cin >> T;
    for(int i = 0;i<T;i++){
        cin >> k;
        cin >> n;
        floor.push_back(make_pair(k,n));
        if(k>maxk)
            maxk = k;
    }
    vec.resize(maxk+1,vector<int>(15,0));

    for(const auto& p : floor){
        cout << fnum(p.first,p.second)<<endl;
    }

    /*
    cout <<endl;
    for(int i = 0;i<=k;i++){
        for(int j= 1; j<10 ;j++){
            cout << vec[i][j] << " ";
        }
        cout <<endl;
    } 
    */
    return 0;
}


int fnum(int k,int n){
    if(vec[k][n] > 0){ 
        return vec[k][n];
    }

    if(k==0){
        vec[k][n] = n;
        return vec[k][n];
    }
    for(int i = 1;i<=n;i++) {
        vec[k][n] += fnum(k-1,i);
    }
    return vec[k][n];
}
