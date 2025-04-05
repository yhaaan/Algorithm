#include <iostream>
using namespace std;

int main() {
    int n,m;
    char mm[50][50];
    cin >> n >> m;
    for(int i =0;i<n;i++){
        for(int j = 0; j< m; j++){
            cin >> mm[i][j];
        }
    }


    for(int i =0;i<n;i++){
        for(int j = 0; j< m; j++){
            if(mm[i][j] != '.'){
                mm[i][m-j-1] = mm[i][j];
            }
        }
    }

    for(int i =0;i<n;i++){
        for(int j = 0; j< m; j++){
            cout << mm[i][j];
        }
        cout << "\n";
    }

}