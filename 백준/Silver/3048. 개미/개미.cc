#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n,m,t;
    string a,b;
    cin >>n>>m>> a>> b >>t;

    reverse(a.begin(), a.end());
    string r = a+b;
    for(int i = 0 ; i < t ; i++){
        for(int j = 0 ; j < r.length(); j++){
            //cout << a.find(r[j]) << endl;
            if (a.find(r[j]) != string::npos && b.find(r[j+1]) != string::npos){
                char temp = r[j];
                r[j] = r[j+1];
                r[j+1] = temp;
                j++;
            }
        }
    }

    cout << r;
}