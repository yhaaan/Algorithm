#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int avg(vector<int> &vec){
    double sum = accumulate(vec.begin(),vec.end(),0.0);
    return round(sum/vec.size());
    
}
int mid(vector<int> vec){
    sort(vec.begin(),vec.end());
    return vec[vec.size()/2];
}
int bin(vector<int> &vec){
    map<int,int> bin;
    for(auto n : vec){
        bin[n]++;
    }
    int num = vec.front();
    int numc = -1;
    int snum = 5000;
    for(auto &n : bin){
        if(n.second > numc){
            numc = n.second;
            num = n.first;
            snum = 5000;
        }
        else if (n.second == numc){
            if(n.first < num){
                snum = num;
                num = n.first;
            }
            else if(n.first < snum){
                snum = n.first;
            }
        }
        //cout << "num = " <<num << " snum = " <<snum <<endl;
    }
    return snum == 5000 ? num : snum;
}
int ran(vector<int> vec){
    sort(vec.begin(),vec.end());
    return vec.back() - vec.front();
}



int main() {
    vector<int> vec;
    int n,k;
    cin >> n;
    for(int i =0; i< n; i++){
        cin >> k;
        vec.push_back(k);
    }
    cout << avg(vec) << "\n" << mid(vec) << "\n" <<bin(vec) <<"\n" << ran(vec);
    return 0;
}