#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>


void printv(vector<string>& vec);
int main() {
    int N;
    string str;
    vector<string> vec;
    cin >> N;
    for(int i =0;i<N;i++){
        cin >>str;
        vec.push_back(str);
    }
    
 
    // 문자열 길이로 정렬, 길이가 같으면 사전순
    sort(vec.begin(), vec.end(), [](const string& a, const string& b) {
        return a.size() < b.size() || (a.size() == b.size() && a < b);
    });
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    printv(vec);
    return 0;
}

void printv(vector<string>& vec){
    for (auto& v : vec) {
        cout << v << "\n";
    }
}

