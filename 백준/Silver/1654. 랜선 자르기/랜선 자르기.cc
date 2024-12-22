#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findnum(int n,vector<int> &vec);
int countn(int len, int n, vector<int> &vec);

int main() {
    int k,n,num;
    vector<int> vec;
    cin >> k >> n;
    for(int i =0;i<k;i++){
        cin >> num;
        vec.push_back(num);
    }

    //내림차순 정렬
    sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b;
    });

    findnum(n,vec);
}

void findnum(int n,vector<int> &vec){ 
    int maxlen = -1;
    int cnt = 0;
    int len = 0;
    long long mnum = vec[0]; // 2페이즈 진입시 사용하게 될 값
    long long stn, edn;

    //2페이즈 진입
    //이진탐색으로 최적값 찾음
    stn = 0;
    edn = mnum;
    do{
        cnt = countn(mnum,n,vec);
        if(cnt > n){
            stn = mnum;
            if(maxlen < mnum)
                maxlen = mnum;
        }
        else if(cnt < n){
            edn = mnum;
        }
        else{
            if(maxlen < mnum)
                maxlen = mnum;
            stn = mnum;
        }
        mnum = stn*0.5 + edn*0.5;
    }
    while(stn+1 < edn);
    cout << maxlen;
}

int countn(int len, int n, vector<int> &vec){
    //len길이로 몇개 만들 수 있는가
    int count = 0;
    for(auto num : vec){
        count += num/len;
    }
    return count;
}


