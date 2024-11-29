#include <iostream>
using namespace std;

int check(char **arr, int n,int m){
    int cnt = 0;
    char wb[2] = {'W','B'};
    char flag = arr[n][m] == 'W' ? 0 : 1;
    for(int i = n; i<n+8;i++){
        for(int j =m;j<m+8;j++){
            if(arr[i][j] != wb[flag])
                cnt++;
            flag = (flag+1)%2;
        }
        flag = (flag+1)%2;
    }
    return cnt > 32 ? 64-cnt:cnt;
}

int fill(char **arr,int n,int m){
    int min =2500;
    int cnt;
    for(int i=0;i<n-7;i++){
        for(int j=0;j<m-7;j++){
            cnt = check(arr,i,j);
            if(cnt < min){
                min = cnt;
            }
        }
    }
    return min;
}
int main() {
    int n,m;
    char **arr;
    cin >> n >> m;
    arr = new char*[n];
    for(int i=0;i<n;i++){
        arr[i] = new char[m];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    cout << fill(arr,n,m);
    return 0;
}


