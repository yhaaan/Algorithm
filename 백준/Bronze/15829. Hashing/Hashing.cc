#include <iostream>
#include <cmath>
using namespace std;

const int M = 1234567891;
int hashnum(string str,int len);
long long selfpow(int n);

int main() {
    int len;
    string str;
    cin >> len;
    cin >> str;
    cout << hashnum(str,len);
    return 0;
}


int hashnum(string str,int len){
    long long sum=0;
    for(int i = 0;i<len;i++){
        sum += (str[i]-96)*selfpow(i);
        //cout << "\nsumis " <<sum << " to "<<sum%M<<endl;
        sum= sum%M;
    }
    
    return sum%M;
}

long long selfpow(int n){
    long long result = 1;
    for(int i =0;i<n;i++){
        result *= 31;
        result=result%M;
    }
    //cout << result <<endl;
    return result;
}