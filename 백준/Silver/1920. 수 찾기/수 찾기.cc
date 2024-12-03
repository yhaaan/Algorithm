#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    int num;
    vector<int> a, b;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> num;
        a.push_back(num);
    }
    cin>>m;
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++){
        cin >> num;
        if(binary_search(a.begin(),a.end(),num))
            cout<<'1'<<"\n";
        else
            cout<<'0'<<"\n"; 
    }
    return 0;
}
