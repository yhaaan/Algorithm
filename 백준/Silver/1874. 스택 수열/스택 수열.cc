#include <iostream>
#include <vector>
using namespace std;

int cur = 0;
int maxn = 0;
int *arr;
vector<char> res;

void up(int num){
    for(int j=1;j <= num;j++){
        if(arr[j] == 0){
            res.push_back('+');
            arr[j] = 1; //push 된적 있음
        }
    }
    maxn = num;
    cur = num;
    res.push_back('-');
    arr[num] = 2; //pop 된 적 있음
}

void down(int num){
    for(int j=cur-1; j>=num ;j--){
         if(arr[j] == 1){
             res.push_back('-');
             arr[j] = 2;
         }   
    }
    cur = num;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,num;
    cin >> n;
    arr = new int[n+1];
    for(int i =1; i<=n; i++) arr[i] = 0; 

    
    for(int i =0;i<n;i++){
        cin >> num;
        if(arr[num] == 2){
            cout << "NO";
            return 0;
        }
        if(num > maxn) up(num);
        else down(num);   
    }

    for(auto v : res)
        cout << v << "\n";
}

