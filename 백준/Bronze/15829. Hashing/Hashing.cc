#include <iostream>
#include <cmath>
using namespace std;

const int M = 1234567891;
int hashnum(string str,int len);

int main() {
    int len;
    string str;
    cin >> len;
    cin >> str;
    cout << hashnum(str,len);
    return 0;
}


int hashnum(string str,int len){
    int sum=0;
    for(int i = 0;i<len;i++)
        sum += (str[i]-96)*pow(31,i);
    
    return sum%M;
}
