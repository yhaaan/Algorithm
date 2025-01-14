#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void printv(vector<vector<int>> &vec);
void BFS();
int n,m,x,y;
vector<vector<int>> vec,vis,res;
int main() {
    int num;
    cin >> n >> m;
    vec.resize(n,vector<int>(m,0));
    vis.resize(n,vector<int>(m,0));
    res.resize(n,vector<int>(m,0));
    
    for(int i = 0; i<n;i++){
        for(int j= 0; j<m;j++){
            cin >> num;
            vec[i][j] = num;
            if(num == 2){
                x = i;
                y = j;
            }
        }
    }
    BFS();
    printv(res);
    return 0;
}

void BFS(){
    vis[x][y] = 1;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0 ; i< 4 ; i++){
            int n_x = x + dx[i];
            int n_y = y + dy[i];
            if(0 <= n_x && n_x < n && 0 <= n_y && n_y < m){
                
                if(vec[n_x][n_y] == 1 && vis[n_x][n_y] == 0){
                    res[n_x][n_y] = res[x][y] +1;
                    vis[n_x][n_y] = 1;
                    q.push(make_pair(n_x,n_y));
                }
            }
        }
    }

    for(int i = 0; i<n;i++){
        for(int j= 0; j<m;j++){
             if(vis[i][j] == 0 && vec[i][j] == 1)
                 res[i][j] = -1;
        }
    }
}



void printv(vector<vector<int>> &vec){
    for(int i = 0; i<n;i++){
        for(int j= 0; j<m;j++)
            cout << vec[i][j] <<" ";
        cout << endl;
    }
}