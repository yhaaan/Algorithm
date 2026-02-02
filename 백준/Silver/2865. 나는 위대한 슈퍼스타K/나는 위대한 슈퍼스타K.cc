#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n,m,k;
    cin >> n >> m >> k;
    unordered_map<int, float> map;
    for(int i = 0; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            int ss;
            float s;
            cin >> ss >> s;
            if(map[ss] < s)
                map[ss] = s;
        }
    }

    vector<pair<int,float>> vec(map.begin(),map.end());
    sort(vec.begin(),vec.end(), [](const auto& a,const auto& b){
        return a.second > b.second;
    });

    float sum = 0;
    for(int i = 0; i < k ; i++){
        sum += vec[i].second;
    }

    cout << fixed << setprecision(1);
    cout << sum;
}