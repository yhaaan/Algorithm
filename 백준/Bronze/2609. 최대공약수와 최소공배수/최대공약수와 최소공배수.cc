#include <iostream>
#include <cmath>
using namespace std;
int gcf(int a,int b);
int lcm(int a,int b, int n);
int main() {
    int a,b;
    int n;
    cin >> a >> b;
    n = gcf(a,b);
    
    cout << n <<endl<< lcm(a,b,n);
    
    return 0;
}

int gcf(int a,int b){
    int min = a>b? b:a;
    int max = a>b? a:b;
    int result = -1;
    
    for(int i = 1;i<=min;i++){
        if(min%i==0 && max%i == 0)
            result = i;
    }
    return result;
}

int lcm(int a,int b,int n){
    for(int i =1; i*n<=a*b; i++){
        if((i*n)%a ==0 && (i*n)%b==0)
            return i*n;
    }
    return -1;
}
