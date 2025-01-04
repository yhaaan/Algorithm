#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    getchar();
    for(int i =0; i< n;i++){
        getline(cin,str);
        cout << i+1 <<". "<<str <<'\n';
    }
}