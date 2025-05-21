#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str;
    int mm;
    int t= 0;
    cin >> n;
    for(int i =0; i< n ; i++){
        cin >> str;
        cin >> mm;
        int m = stoi(str.substr(3,5));
        if(str.substr(0,2) >= "07" && str.substr(0,2) < "19" ){
            
            if(str.substr(0,2) == "18" && (mm + m-60) > 0){
                t += (mm+m-60) *5;
                t += (60-m) * 10;
            }
            else{
                t += 10*mm;
            }
        }
        else{
            
            if(str.substr(0,2) == "06" && (mm + m-60) > 0){
                t += (mm+m-60) *10;
                t += (60-m) * 5;
            }
            else{
                t += 5*mm;
            }
        }
    }
    cout << t;
}