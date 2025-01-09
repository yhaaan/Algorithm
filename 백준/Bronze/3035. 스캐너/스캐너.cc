#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int R,C,ZR,ZC;
    char** str;
    cin >> R >> C >> ZR>> ZC;
    str = new char*[R];
    for(int i =0;i<R;i++){
        str[i] = new char[C+1];
    }

    for(int i =0;i<R;i++){
        cin >> str[i];
    }

    for(int i =0; i< R; i++){
        for(int k = 0 ; k<ZR;k++){
            for(int j = 0; j<C;j++){
                for(int k2 = 0; k2<ZC;k2++)
                    cout << str[i][j];
            }
            cout <<endl;
        }
    }
    return 0;
}