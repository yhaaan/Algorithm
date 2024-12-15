#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main() {
    vector<int> vec;
    int k,n;
    cin >> k;
    for(int i =0;i<k;i++){
        cin >>n;
        if(n == 0){
            if(!vec.empty())
                vec.pop_back();
            continue;
        }
        vec.push_back(n);
        
    }
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum;
}