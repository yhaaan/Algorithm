#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    for(int i = 0 ;i < n ; i++){
        cin >> str;
        int c = 0;
        for(int j = 0 ; j < 16 ; j++){
            int num = str[j]-'0';
            //cout << num;
            if(j%2 ==1){
                c += num;
            }
            else{
                num = num*2;
                if(num >= 10){
                    num = num%10+1;
                }
                c+= num;
            }
        }
        
        //cout<<endl << c <<endl;
        if(c%10 == 0) cout << "T\n";
        else cout <<"F\n";
    }
}