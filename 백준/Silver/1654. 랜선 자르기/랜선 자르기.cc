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

    sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b;
    });

    //for(auto v : vec) cout << v << endl;
    findnum(n,vec);
}

void findnum(int n,vector<int> &vec){ 
    int maxlen = -1;
    int cnt = 0;
    int len = 0;
    int mnum = -1; // 최소 길이 숫자
    for(auto num : vec){
        len = num;
        cnt = countn(len,n,vec);
        if(cnt < n) mnum = len;
        if(cnt == n && maxlen < len) maxlen = len;
    }
    if(maxlen != -1){
        cout << maxlen;
        return;
    }
    //2페이즈 진입
    int stn, edn;
    stn = 0;
    edn = mnum;
    while(stn+1 < edn){
        mnum = (stn + edn )/2;
        cnt = countn(mnum,n,vec);
        //cout << stn << "~"<<edn <<" "<<mnum <<  " cnt :" << cnt<<endl;
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
    }
    cout << maxlen;
}

int countn(int len, int n, vector<int> &vec){
    //len길이를 n개 만들 수 있나?
    int count = 0;
    for(auto num : vec){
        count += num/len;
    }
    //cout << "test : " << count<<" " << len <<endl;
    return count;
}


