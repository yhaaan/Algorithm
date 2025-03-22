#include <iostream>
using namespace std;
#include<string>
int main() {
    int n;
    cin >> n;
    string str;
    for(int i =0; i< n ;  i++){
        cin >> str;
            for(int j = 0 ; j <= str.size();j++){
                if(j == str.size()-j-2){
                    //cout << j << str.size()-j-2;
                    if(str[j] == str[str.size()-j-1])
                        cout << "Do-it\n";
                    else
                        cout << "Do-it-Not\n";
                }
            }
        }
}