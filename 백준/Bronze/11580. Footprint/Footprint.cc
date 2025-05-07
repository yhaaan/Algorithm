#include <iostream>
using namespace std;

int main() {
    int m[5000][5000] = {0,};
    int n;
    int cnt = 1;
    cin >> n;
    int x = 2500,y = 2500;
    m[x][y] = -1;
    char k;
    for(int i = 0 ; i< n ; i++){
        cin >> k;
        
        if(k == 'E') x++;
        if(k == 'W') x--;
        if(k == 'S') y--;
        if(k == 'N') y++;
        if(m[x][y] != -1){
            
            
            cnt ++;
            m[x][y] = -1;
            
        }
    }

    cout << cnt;
}