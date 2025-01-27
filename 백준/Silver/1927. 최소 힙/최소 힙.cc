#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    int x;
    cin >> N;
    priority_queue<int,vector<int>,greater<int>> mh; //최소힙
    for(int i= 0; i< N; i++){
        cin >> x;
        if(x == 0){
            if(!mh.empty()){
                cout << mh.top() <<'\n';
                mh.pop();
            }
            else{
                cout << "0\n";
            }
        }
        else{
            mh.push(x);
        }
    }
}