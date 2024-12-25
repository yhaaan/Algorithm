#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n,m;
    string name;
    map<string,int> p,r;
    cin >> n >> m;
    for(int i =0; i< n ; i++){
        cin >> name;
        p[name]++;
    }
    for(int i =0; i< m ; i++){
        cin >> name;
        if(p.find(name) != p.end())
            r[name]++;
    }

    cout<<r.size() << '\n';
    for (auto &name : r) {
        cout << name.first << '\n';
    }
    return 0;
}