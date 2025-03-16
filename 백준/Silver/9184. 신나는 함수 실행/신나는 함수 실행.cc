#include <iostream>
using namespace std;

int ww(int a, int b, int c);
int w[51][51][51];

int main() {
    w[0][0][0] = 1;
    for(int i = 1; i < 21; i++){
        for(int j = 1; j< 21; j++){
            for(int k = 1; k < 21; k++){
                w[i][j][k] = -1;
            }
        }
    }


    int a,b,c;
    while(true){
        cin >> a>>b>>c;
        if( a== -1 && b == -1 && c == -1){
            return 0;
        }
        cout << "w("<<a<<", "<<b<<", "<<c <<") = "<<ww(a,b,c) <<endl;
    }

}


int ww(int a, int b, int c){
    
    if(a<= 0 || b<= 0 || c<= 0){
        return 1;       
    }
    else if(a > 20 || b > 20 || c > 20){
        return ww(20,20,20);
    }
    else if(w[a][b][c] != -1){
        return w[a][b][c];
    }   
    else if(a < b && b < c){
         w[a][b][c] =  ww(a, b, c-1) + ww(a, b-1, c-1) - ww(a, b-1, c);
    }
    else{
        w[a][b][c] = ww(a-1, b,c) + ww(a-1,b-1,c) + ww(a-1,b,c-1) - ww(a-1,b-1,c-1);
    }
    return w[a][b][c];
}