#include <iostream>
#include <string>
using namespace std;
int endNum(int n);
int main() {
    int N;
    cin >> N;
    cout << endNum(N);
    return 0;
}

int endNum(int n){
    int cnt =0;
    int six,num;
    for(int i = 666; cnt <= n;i++){
        num = i;
        six = 0;
        while(num>0){
            if(num%10 == 6) six++;
            else six = 0;
            num/=10;
            if(six>=3){
                cnt++;
                //cout << i << " " << cnt <<endl;
                break;
            }
        }
        if(cnt==n)
            return i;
    }
    return -1;
}