#include <iostream>
#include <vector>
#include <cmath>
#define p pair<int,int>
using namespace std;


void z(int num, p s);

int n,r,c;
int count = 0;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> r >> c;

    p s = make_pair(0,0);
    z(pow(2,n),s);
    return 0;
}


void z(int num, p s){
    //base
    if(num == 1) {
        if(s.first == r && s.second == c){
            cout << count;
            return;
        }
        count ++;
        return;
    }
    
    int k = num/2;
    //구역 당 시작 점
    p s1 = make_pair(s.first,s.second);
    p s2 = make_pair(s.first,s.second + k);
    p s3 = make_pair(s.first + k , s.second);
    p s4 = make_pair(s.first + k ,s.second + k);

    if(s1.first <= r && r < s1.first + k && s1.second <= c && c < s1.second + k) z(k,s1);
    else count += k*k;

    if(s2.first <= r && r < s2.first + k && s2.second <= c && c < s2.second + k) z(k,s2);
    else count += k*k;

    if(s3.first <= r && r < s3.first + k && s3.second <= c && c < s3.second + k) z(k,s3);
    else count += k*k;

    if(s4.first <= r && r < s4.first + k && s4.second <= c && c < s4.second + k) z(k,s4);
    else count += k*k;
    
    
}

