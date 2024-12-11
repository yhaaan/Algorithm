#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,cnt;
    int* rank;
    cin >> n;
    rank = new int[n];
    vector<tuple<int,int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x>>y;
        v.push_back(make_tuple(x,y,i));
    }
    sort(v.begin(),v.end(), [](tuple<int,int,int> x , tuple<int,int,int> y){
        return get<0>(x) > get<0>(y) && get<1>(x) > get<1>(y);
    });
 

    for(int i =0;i<n;i++){
            cnt = 1;

            for(int j = 0; j< n;j++){
                if(get<0>(v[j]) >get<0>(v[i]) && get<1>(v[j]) >get<1>(v[i]))
                    cnt++;
            }
            
            rank[get<2>(v[i])] = cnt;
    }
    for(int i =0;i<n;i++)
            cout << rank[i] << " ";
}
            
