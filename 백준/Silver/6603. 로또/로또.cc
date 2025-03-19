#include <iostream>
#include <vector>
using namespace std;

int arr[13];
int ans[13];
int use[13];
int n;

void f(int k);
int main() {
        while(true){
        cin >> n;
        if(n == 0) return 0;
        for(int i =0; i< n; i++){
            cin >> arr[i];
        }
        f(0);
        cout<<"\n";
    }
}




void f(int k){
    if(k == 6){
        for(int i = 0; i< 6; i++){
            cout << ans[i] << ' ';
        }
        cout << "\n";
        return;
    }

    for(int i = 0; i< n ; i++){
        if(use[i] == 0 && arr[i] > ans[k-1]){
            use[i] = 1;
            //cout << "!! " << i <<"사용 \n";
            ans[k] = arr[i];
            //cout << "ans[" << i<<"] = " << arr[i] << endl;
            f(k+1);
            use[i] = 0;
        }
    }
}