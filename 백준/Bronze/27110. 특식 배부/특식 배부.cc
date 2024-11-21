#include <iostream>
using namespace std;
int cal(int n,int a);
int main() {
    int N;
    int a,b,c;
    int sum = 0 ;
    cin >> N;
    cin >> a>>b>>c;
    sum += cal(N,a) + cal(N,b) + cal(N,c);
    cout << sum;
    return 0;
}

int cal(int n,int a){
    if(a>=n)
        return n;
    else
        return a;
}