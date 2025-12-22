#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int t;
    int id;
    int count = 0;
    int mc = 0;
    int mid;
    for(int i =0 ; i< n ; i++){
        cin >> t;
        if(t==1){
            cin >> id;
            count ++;
            if(mc < count){
                mc = count;
                mid = id;    
            }
            else if(mc == count && mid > id){
                mid = id; 
            }
        }
        else{
            count --;
        }
    }

    cout << mc << " " <<mid;
}