#include <iostream>
using namespace std;
#include <queue>

int main() {
    int n,k;
    queue<int> q;
    cin >> n >> k;
    for(int i =1 ; i<=n ;i++){
        q.push(i);
    }
    int tmp;
    cout << "<";
    while(q.empty() != true){
        for(int i = 0; i<k-1;i++){
            q.push(q.front());
            q.pop();
        }
        if(q.size() == 1)
            cout<< q.front();
        else
            cout<< q.front() <<", ";
        
        q.pop();
    }
    cout <<">";
    return 0;
}