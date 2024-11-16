#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int num;
    vector<int> vec(10001,0);
    cin >> N;
    for(int i =0;i<N;i++){
        cin >> num;
        vec[num]++;
    }

    
    for(int i =1 ;i<=10000;i++){
        for(int j = 0 ; j<vec[i] ; j++)
            cout << i <<"\n";
    }
    return 0;
}

