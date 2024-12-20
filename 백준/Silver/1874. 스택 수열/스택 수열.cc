#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n,num;
    cin >> n;
    int cur = 0;
    int max = 0;
    int *arr = new int[n+1];
    vector<char> res;
    for(int i =1; i<=n; i++) arr[i] = 0; 

    
    for(int i =0;i<n;i++){
        cin >> num;
        if(arr[num] == 2){
            cout << "NO";
            return 0;
        }
        if(num > max){
            for(int j=1;j <= num;j++){
                if(arr[j] == 0){
                    res.push_back('+');
                    arr[j] = 1; //push 된적 있음
                }
            }
            max = num;
            cur = num;
            res.push_back('-');
            arr[num] = 2; //pop 된 적 있음
        }
        else{
            for(int j=cur-1; j>=num ;j--){
                 if(arr[j] == 1){
                     res.push_back('-');
                     arr[j] = 2;
                 }   
            }
            cur = num;
        }
    }

    for(auto v : res)
        cout << v << "\n";
}

