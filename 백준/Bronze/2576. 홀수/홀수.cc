#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> odd;
    int n;
    for(int i =0 ; i < 7; i++){
        cin >> n;
        if(n%2 == 1)
            odd.push_back(n);
    }

    if(odd.size() == 0){
        cout << -1;
        return 0;
    }

    int sum = 0;
    int min = 101;
    for(int i = 0 ; i < odd.size(); i++){
        sum += odd[i];
        if(odd[i] < min)
            min = odd[i];
    }

    cout << sum << endl << min;
    
}