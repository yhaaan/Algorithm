#include <iostream>
#include<string>
using namespace std;

int mo(string str);
int main() {
    string str;
    while(1){
        getline(cin,str);
        if(str == "#")
            return 0;
        cout << mo(str)<<endl;
    }
    
    return 0;
}


int mo(string str){
    int cnt = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
            || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            cnt ++;
        }
    }
    return cnt;
}