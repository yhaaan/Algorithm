#include <iostream>
using namespace std;
int main() {
    int p,t;
    int a[21];
    cin >> p;
    for(int i = 0 ; i < p ; i ++){
        int cnt = 0;
        cin>> t;
        for(int j = 0 ; j < 20; j ++){
            cin >> a[j];
            int n = 0;
            for(int k = 0 ; k <j; k++){
                if(a[k] > a[j])
                    n++;
            }
            cnt += n;
            //cout << n << " + 추가 " << j <<" "<<a[j] <<endl;
        }
        cout << t << " " <<cnt <<endl;
    }
}