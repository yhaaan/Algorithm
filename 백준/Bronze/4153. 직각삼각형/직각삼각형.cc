#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    vector<int> vec(3);
    int max;
     while(true){
        cin >> vec[0] >> vec[1] >> vec[2];
        if(vec[0] == 0 && vec[1] == 0 && vec[2] == 0)
            break;
        for(int i =0;i<3;i++) vec[i] = vec[i]*vec[i];
        sort(vec.begin(),vec.end());
        if(vec[2] == vec[0]+vec[1])
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
    return 0;
}