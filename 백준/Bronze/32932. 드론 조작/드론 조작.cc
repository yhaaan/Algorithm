#include <iostream>
using namespace std;

int main() {
    int n , k ;
    int m[1001][1001] = {0,};

    for(int i = 0 ; i < 501; i++){
        for(int j = 0 ; j < 501; j++){
            m[i][j] = 0;
        }
    }
    cin >> n >> k ;

    for(int i = 0 ; i < n ; i++){
        int x,y;
        cin >> x>>y;
        m[x+500][y+500] = 1;
    }

    char c;
    int p[2] = {500,500};
    for(int i = 0 ; i< k ; i++){
        cin >> c;
        if(c=='U' && m[p[0]][p[1]+1] != 1) p[1] +=1;
        if(c=='D' && m[p[0]][p[1]-1] != 1) p[1] -=1;
        if(c=='R' && m[p[0]+1][p[1]] != 1) p[0] +=1;
        if(c=='L' && m[p[0]-1][p[1]] != 1) p[0] -=1;
    }
    cout << p[0]-500 <<' ' <<p[1]-500;
    
}