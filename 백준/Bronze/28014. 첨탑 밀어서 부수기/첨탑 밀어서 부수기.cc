#include <iostream>
using namespace std;

int arr[5000001];
int main(void){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int cnt = 1;
    for(int i = 0;i<= n ;i++){
        cin >> arr[i];
        if(i > 0){
            if(arr[i] >= arr[i-1])
                cnt ++;
        }
    }

    cout <<cnt;
}


