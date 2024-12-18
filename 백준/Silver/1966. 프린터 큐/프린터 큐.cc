#include <iostream>
#include <deque>
using namespace std;

bool isfirst(int m, deque<pair<int,int>>& q);
int main() {
    int t;
    int n,m;
    int c;
    cin >> t;
    for(int i = 0; i < t; i ++){
        cin >> n >> m;
        deque<pair<int,int>> q;
        for(int j = 0; j < n; j++){
                cin >> c;
                q.push_back(make_pair(c,j));
            
            }
        int cnt = 0;
        while(!q.empty()){
            if(isfirst(q.front().first , q)){
                cnt ++;
                //cout << q.front().first <<"  is out\n";
                if(q.front().second == m){
                    cout << cnt <<"\n";
                    break;
                }
                q.pop_front();
            }
            else{
                //cout << "go back " <<q.front().first <<endl;
                q.push_back(q.front());
                q.pop_front();
            }
        }
    }
    return 0;
}

bool isfirst(int m, deque<pair<int,int>>& q){
    //cout <<"first ?  "<< m << endl;
    for(auto it = q.begin(); it != q.end(); ++it){
        if(m<it->first)
            return false;
    }
    return true;
}