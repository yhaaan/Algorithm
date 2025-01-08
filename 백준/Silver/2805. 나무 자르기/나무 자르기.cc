#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long cal(int h);
int N, M;
vector<int> vec;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    cin >> N >> M;
    for(int i = 0 ; i < N;i++){
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b;
    });

    int h;
    long long sum;
    int s = vec[0]; 
    int e = 0;
    
    sum = 0;
    h = (s+e)/2;
    while(s > e+1){
        //cout << "s =" << s<< " e = " << e << " h = " <<h<<endl;
        sum = cal(h);
        if(sum > M)
            e = h;
        else if(sum < M)
            s = h;
        else
            break;
        h = (s+e)/2;
    }
    //cout <<"h = " <<h << " sum = " <<sum;
    cout << h;
}


long long cal(int h){
    long long sum = 0;
    for(int i =0;i<N;i++)
    {
        if(vec[i] < h)
            break;
        sum += vec[i]-h;
    }
    //cout << sum << " " <<h <<endl;
    return sum;
}