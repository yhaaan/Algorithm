#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(const pair<string, float>& a, const pair<string, float>& b) {
    return a.second > b.second;
}
int main() {
    int n;
    bool first = false;
    while (cin >> n && n != 0) {
        if(first ==false){
            first = true;
        }
        else cout << "\n";
        vector<pair<string,float>> st;
        for(int i= 0; i< n; i++){
            string name;
            float h;
            cin >> name >> h;
            st.push_back({name,h});
        }

        sort(st.begin(), st.end(), compare);
        float max_height = st[0].second;
        

        for(const auto& student : st){
            if(student.second == max_height){
                cout << student.first << " ";
            }
            else{
                break;
            }
        }
        
    }

    return 0;
}