#include <iostream>
using namespace std;

int arr[101][101];


int main() {
    int n, m;
    cin >> n >> m;
    for(int i =0; i< n ; i ++){
        for(int j = 0; j < m ; j++){
            cin >> arr[i][j];
        }
    }
    int k;
    for(int i =0; i< n ; i ++){
        for(int j = 0; j < m ; j++){
            cin >> k;
            arr[i][j] += k;
        }
    }
    for(int i =0; i< n ; i ++){
        for(int j = 0; j < m ; j++){
            cout << arr[i][j];
            if(j < m-1) cout << " ";
        }
        cout << endl;
    }
}