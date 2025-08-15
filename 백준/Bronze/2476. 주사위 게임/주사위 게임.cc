#include <iostream>
using namespace std;

int main() {
    int n;
    int num[3];
    int sum = 0;
    int maxsum=0;
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        cin >> num[0] >> num[1] >> num[2];
        if(num[0] == num[1] && num[1] == num[2]){
            sum = 10000+ num[0]*1000;
        }
        else if(num[0] == num[1] && num[1] != num[2]) {
            sum = 1000+ num[0]*100;
        }
        else if(num[1] == num[2] && num[0] != num[2]) {
            sum = 1000+ num[1]*100;
        }
        else if(num[0] == num[2] && num[1] != num[2]) {
            sum = 1000+ num[0]*100;
        }
        else{
            int maxn = 0;
            for(int i =0;i<3;i++){
                if(num[i] > maxn)
                    maxn = num[i];
            }
            sum = maxn * 100;
        }
        
        
        if(maxsum < sum)
            maxsum = sum;
    }
    cout << maxsum;
}