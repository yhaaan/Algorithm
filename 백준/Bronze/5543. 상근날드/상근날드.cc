#include<iostream>
using namespace std;

int main(){
    int a[5];
    int h = 100000;
    int j = 100000;
    for(int i=0;i<5;i++){
        cin >> a[i];
        if(i<3){
            if(a[i] < h){
                h = a[i];
            }
        }
        else{
            if(a[i] < j){
                j = a[i];
            }
        }
    }
    //cout << h << " " << j ;
    cout << h+j-50;
}