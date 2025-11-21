#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arr[2001]= {-1,};
    fill(begin(arr),end(arr),-1);

    int k;
    int md = -1;
    cin >> n;
    for(int i = 0 ; i < 2*n ; i++){
        cin >> k;
        if(arr[k] == -1) 
            arr[k] = i;
        else if(md < i-arr[k]){
            //cout << "i - arr[k] : "<<i <<" - "<< arr[k] << " k = " << k << endl;
            md = i-arr[k];
        
        }
    }

    cout << md-1;

}