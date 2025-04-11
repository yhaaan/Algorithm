#include <iostream>
using namespace std;

int main() {
    int ans = 1;
    int flag = 0;
    int n,m;
    cin >> n >> m ;
    int c;
    cin >> c;

    int g, gg;
    for(int i =0 ; i < c; i++){
        cin >> g;
        flag = 0;
        for(int j = 0; j< g;j++){
            cin >> gg;
            if(gg == m)
                flag = 1;
        }
        if(flag == 0)
            ans = 0;
    }
    if(ans == 0)
        cout << "NO";
    else
        cout << "YES";
}