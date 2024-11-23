#include <iostream>
using namespace std;
int main() {
    int arr[10]={0,};
    int n;
    for(int i=0;i<5;i++){
        cin >> n;
        if(arr[n] == 0)
            arr[n] = 1;
        else
            arr[n] = 0;
    }

    for(int i = 0; i< 10;i++)
        if(arr[i]==1)
            cout << i;
    return 0;
}