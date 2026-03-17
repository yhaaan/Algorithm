#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    cout << fixed; 
    cout << setprecision(1);
    int n;
    float arr =0;
    int k;
    int num = 0;
    cin >> n;
    while(n != 0){
        arr = 0;
        num ++;
        for(int i = 0 ; i< n ; i++){
            cin >> k;
            if(i == n/2 || i == (n-1)/2){
                arr += k;
            }
        }
        if(n%2 == 0) arr/=2;
        cout << "Case " << num << ": " << arr<<'\n';
        cin >> n;
    }
}