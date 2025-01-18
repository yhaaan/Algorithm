#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int N;
int main() {
    int k,a,b;
    int cnt  = 0;
    cin >> N;
    vector<int>* arr = new vector<int>[N+1];
    vector<int> vis(N+1,0);
    
    cin >> k;
    for(int i = 0; i< k ;i++){
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while(!q.empty()){
        int c = q.front();
        q.pop();
        for (auto com : arr[c]) {
            if(vis[com] == 0){
                vis[com] = 1;
                cnt++;
                q.push(com);
            }
        }
    }
    

    cout << cnt;
    
    return 0;
}