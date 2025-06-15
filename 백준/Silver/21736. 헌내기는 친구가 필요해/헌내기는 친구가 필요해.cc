#include <iostream>
#include <queue>
using namespace std;
using PII = pair<int, int>;

int cnt = 0;
int n,m;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
char map[600][600];
PII startpos;

void BFS();
int main(void){
    ios::sync_with_stdio(false);
	cin.tie(0);

    char c;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            cin >> c;
            map[i][j] = c;
            if(c == 'I'){
                startpos = make_pair(i,j);
            }
        }
    }

    BFS();

    if(cnt == 0)
        cout <<"TT";
    else    
        cout <<cnt;
}


void BFS(){
    queue<PII> q;
    q.push(startpos);
    map[startpos.first][startpos.second] = 'X';
    while(!q.empty()){
        PII p = q.front();
        q.pop();
        
        
        
        for(int i = 0 ;i < 4; i++){
            int nx = p.first+dx[i];
            int ny = p.second+dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(map[nx][ny] == 'X') continue;
            q.push(make_pair(nx , ny));
            if(map[nx][ny] == 'P'){
            cnt ++;
            }
            map[nx][ny] = 'X';
        }

    }
}

