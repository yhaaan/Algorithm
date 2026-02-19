#include <iostream>
#include <algorithm>
using namespace std;

float k[5] = {0.5,0.5,0.25,0.0625,0.5625};
int r[4] = {1,30,25,10};

int arr[5];
int q[4];

int p(){
    for(int i = 0 ; i < 5; i ++){
        arr[i] = arr[i]/k[i];
    }
    int maxVal = *min_element(arr, arr + 5);

    int maxk = 0;
    
    for(int i = 0 ; i < 4; i ++){
        q[i] = q[i]/r[i];
        maxk += q[i];
    }
    if(maxk > maxVal) maxk = maxVal;

    return maxk;
}


int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++ ){
        for(int j = 0; j < 5; j ++){
           cin >> arr[j];
       }
        for(int j = 0; j < 4; j ++){
           cin >> q[j];
       }
        cout << p() << endl;
    }
}