#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;


void BFS(int cx,int cy);

char arr[30][30];
vector<int> vec;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n;
int main() {
    
    cin >> n;
    for(int i = 0;i<n;i++){
        for(int j = 0; j< n ; j++){
            cin >> arr[i][j];
        }
    }

    for(int i =0; i< n; i++){
        for(int j = 0 ; j< n;j++){
            if(arr[i][j] == '1'){
                BFS(i,j);
            }
        }
    }

    cout <<vec.size()<< endl;

    sort(vec.begin(), vec.end());

    for(int num : vec) 
        cout << num << '\n';
    
}

void BFS(int cx,int cy){
    queue<pair<int,int>> q;
    int cnt = 0;
    arr[cx][cy] = '2';
    //cout << cx << " , " <<cy << endl;
    q.push(make_pair(cx,cy));
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        //cout << x << " , " <<y <<endl;
        cnt ++;
        for(int i =0; i <4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            //cout << "x,y : "<< x << " + " << y << " nx,ny : " << nx << " , " <<ny <<endl;
            if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            if(arr[nx][ny] == '1'){
                arr[nx][ny] = '2';
                q.push(make_pair(nx,ny));
            }
        }
    }
    vec.push_back(cnt);
}





