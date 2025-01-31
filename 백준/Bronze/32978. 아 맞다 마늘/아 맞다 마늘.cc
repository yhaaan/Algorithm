#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    int n;
    string a;
    unordered_set<string> s;
    cin >> n;
    for(int i =0 ; i < n;i++){
        cin >> a;
        s.insert(a);
    }

    for(int i = 0 ; i < n -1 ; i++){
        cin >> a;
        s.erase(a);
    }
    cout << *s.begin();
    return 0;
}