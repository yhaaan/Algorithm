#include <iostream>
using namespace std;

int main() {
    char map[100];
    int cnt = 0;
    int flag = 0;
    for(int i =0; i< 64;i ++){
        
        cin >> map[i];
        
        if(i%8 == 0 && i != 0){
            flag = (flag +1 )%2;
        }
        if(flag == 0 && map[i] == 'F'){
            //cout << i << " " << map[i] <<endl;
            cnt ++;
        }
        flag = (flag+1)%2;
        
    }

    cout <<cnt;
}