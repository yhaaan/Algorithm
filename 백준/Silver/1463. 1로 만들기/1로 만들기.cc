#include <iostream>
using namespace std;

int arr[1000001];
int x;
void op(){
    if(x%6 ==0){
        if(arr[x/3] <= arr[x/2] && arr[x/3] <= arr[x-1])
            arr[x] = arr[x/3] +1;
        else if(arr[x/2] <= arr[x/3] && arr[x/2] <= arr[x-1])
            arr[x] = arr[x/2] +1;
        else
            arr[x] = arr[x-1]+1;
    }
    else if(x%3 == 0){
        arr[x] = arr[x/3] < arr[x-1] ? arr[x/3]+1 : arr[x-1] +1; 
    }
    else if(x%2 == 0){
        arr[x] = arr[x/2] < arr[x-1] ? arr[x/2]+1 : arr[x-1] +1; 
    }
    else
        arr[x] = arr[x-1]+1;
}


int main() {
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    
    for(int i = 4; i< 1000001 ; i++){
        x = i;
        op();
    }


    int k;
    cin >> k;
    cout << arr[k];
    
}

