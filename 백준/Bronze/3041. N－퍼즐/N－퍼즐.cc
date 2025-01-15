#include <iostream>
using namespace std;

char ans[4][4] = {{'A','B','C','D'},{'E','F','G','H'},{'I','J','K','L'},{'M','N','O','.'}};
int finddis(char key,int x, int y);

int main() {
    char a[4][4];
    int sum = 0;
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> a[i][j];
            if(a[i][j] != '.'){
                sum += finddis(a[i][j],i,j);
            }
        }
    }
    cout <<sum;
}

int finddis(char key,int x, int y){
    int dx,dy;
    for(int i =0; i<4;i++){
        for(int j = 0;j<4;j++){
            if(ans[i][j] == key){
                dx = x - i > 0 ? x - i : i - x;
                dy = y - j > 0 ? y - j : j - y;
                return dx+dy;
            }
        }
    }
    return -1;
}