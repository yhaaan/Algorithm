#include <iostream>
using namespace std;


int main() {
    int n;
    int arr[100];
    cin >> n;
    for(int i =0 ;i < n ; i++){
        cin>> arr[i];
    }

    int c = 30;
    int cnt =0;
    int i = 0;
    while(i < n){
        //cout << "비교 " << arr[i] << " " << c << endl;
        if(arr[i]/2.0 <= c){
            //cout << "학습 완료 " <<arr[i] <<endl;    
            cnt ++;
        }
        else{
            
        }
        c = c- arr[i];
        if(c <= 0)
            c =30;
        i++;
    }

    cout << cnt;
    
}