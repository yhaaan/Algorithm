#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findnum(vector<int>&vec ,vector<pair<int,int>> &num,int n,int m);
void pv(vector<int>&v);
int arr[100000] = {0,};
int main() {
    int n,m;
    int num;
    vector<int> a;
    vector<pair<int,int>> b;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> num;
        a.push_back(num);
    }
    cin>>m;
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++){
        cin >> num;
        b.push_back(make_pair(num,i));
    }
    sort(b.begin(),b.end(),[](const pair<int,int> &a, const pair<int,int> &b){
        return a.first < b.first;
    });

    findnum(a,b,n,m);
    for(int i =0;i<m;i++)
        cout << arr[i] <<"\n";
    return 0;
}

void findnum(vector<int>&vec ,vector<pair<int,int>> &num,int n,int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(vec[i] == num[j].first){
            arr[num[j].second] = 1;
            j++;
        }
        else if(vec[i] > num[j].first){
            j++;
        }
        else{
            i++;
        }
    }
}

void pv(vector<int>&v){
    for (auto name : v) {
        cout << name;
    }
}