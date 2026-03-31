#include <iostream>
#include <string>
using namespace std;

char c[6][6];
int dx[8] = {1,1,2,2,-1,-1,-2,-2};
int dy[8] = {2,-2,1,-1,-2,2,-1,1};

bool ch(int x, int y){
    for(int i = 0; i<8;i++){
        int xx = x+dx[i];
        int yy = y+dy[i];
        if(xx >= 0 && xx < 5 && yy >= 0 && yy < 5){
            if(c[xx][yy] == 'k') return false;
        }
    }
    return true;
}



int main() {
    
    string str = "valid";

    for(int i = 0 ; i < 5; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> c[i][j];
        }
    }

    char k;
    int cnt= 0;
    for(int i = 0 ; i < 5; i++){
        for(int j = 0 ; j < 5 ; j++){
            if(c[i][j] == 'k'){
                cnt ++;
                if(!ch(i,j)) str = "invalid";
            }
        }
    }
    if(cnt != 9)str = "invalid";
    cout << str;
}