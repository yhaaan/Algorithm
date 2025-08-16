#include <iostream>
#include <algorithm>
using namespace std;

int arr[200001];
int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        cin >> arr[i];
    }
    sort(arr,arr+n);

    int a=0,b=0;
    for(int i = 0 ; i < n; i++){
        if(i < n/2)
            a+= arr[i];
        else
            b+= arr[i];
    }
    cout << a << " " <<b;
}