#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,k;

    cin >> a;
    cin >> k;
    cin >> b;
    if(a == b && k == "+"){
        cout << "2" + string(a.length()-1,'0'); 
        return 0;
    }
    if(k == "*"){
        string ans = a + string(b.length()-1, '0');

        cout << ans;
    }
    else{
        int l = b.length();
        if ( b.length() >a.length() ){
            string tmp = a;
            a = b;
            b = tmp;
            l = b.length();
        }
        //cout << a << endl <<b << endl; 
        for(int i =0; i< a.length() ; i++){
            if(i == a.length() - l){
                cout << '1';
                continue;
            }
            cout << a[i];
            
        }
    }
}