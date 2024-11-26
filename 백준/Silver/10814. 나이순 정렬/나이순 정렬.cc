#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int age;
    string name;
    vector<pair<int,string>> vec;
    cin >> N;
    for (int i =0 ; i<N; i++) {
        cin >> age >> name;
        vec.push_back(make_pair(age,name));
    }
    // 안정 정렬(stable_sort)
    stable_sort(vec.begin(), vec.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
        return a.first < b.first; // 첫 번째 값 기준으로 정렬
    });
    for (auto &iter : vec) {
        cout << iter.first << " " <<iter.second << "\n";
    }
    return 0;
}