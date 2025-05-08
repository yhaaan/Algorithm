#include <iostream>
using namespace std;
int main() {
    int h,m,s;
    int d;
    cin >> h>>m>>s;
    cin >> d;
    s += d;
    d = s/60;
    s = s%60;
    //cout << h<< " "<< m << " "<<s<<endl;
    m += d;
    d = m/60;
    m = m%60;
//cout << h<< " "<< m << " "<<s<<endl;
    h += d;
    h = h%24;
    cout << h<< " "<< m << " "<<s;
    
}