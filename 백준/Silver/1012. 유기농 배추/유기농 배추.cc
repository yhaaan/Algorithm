#include <iostream>
#include <vector>
using namespace std;

void cal();
void dfs(int arr[][50], int vis[][50],int i, int j, int m ,int n);

int m,n,k;
int cnt;
int main() {
    int t;
    cin >> t;
    for(int i = 0 ; i < t ;i++)
        cal();
}



void cal(){
    cnt = 0;
    int arr[50][50] = {0,};
    int vis[50][50] = {0,};
    int x,y;
    cin >> m >> n >> k;
    for(int i =0;i<k;i++){
        cin >> x >> y;
        arr[y][x] = 1;
    }

    for(int i = 0; i<n ; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j] == 1 && vis[i][j] == 0){
                cnt ++;
                dfs(arr,vis,i,j,m,n);
            }
        }
    }
    cout << cnt <<endl;
}

void dfs(int arr[][50], int vis[][50],int i, int j, int m ,int n){
    int dx[] = {0,1,0,-1};
    int dy[] = {1,0,-1,0}; 
    vis[i][j] = 1;
    for(int k = 0 ; k<4;k++){
        int nj = j + dx[k];
        int ni = i + dy[k];
        if(ni >= 0 && ni < n && nj >= 0 && nj < m){
            if(arr[ni][nj] == 1 && vis[ni][nj] == 0)
                dfs(arr,vis,ni,nj,m,n);
        }
    }
}

