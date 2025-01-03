#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,K,num;
    vector<int> vec;
    cin >> N >> K;
    for(int i=0;i<N;i++){
        cin >> num;
        vec.push_back(num);
    }
    int cnt = 0;
    int sum = 0;

    for(int i =N-1;i>=0;i--){
        if(K/vec[i] > 0){
            cnt += K/vec[i];
            sum += vec[i]*(K/vec[i]);
            K -= vec[i]*(K/vec[i]);
            //cout << "현재 cnt : " <<cnt << " 현재 sum : " <<sum <<endl; 
        }
        if(sum == K){
            break;
        }
    }
    cout <<cnt;
    
}