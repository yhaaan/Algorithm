#include <iostream>
using namespace std;

int main() {
    int arr[10001];
    int n;
    int y,m;
    y = 0;
    m = 0;
    cin >> n;
    for(int i =0 ; i< n ; i++){
        cin >> arr[i];
        y += 10 * (arr[i]/30 +1);
        m += 15 * (arr[i]/60 +1);
    }

    if(y > m){
        cout << "M " << m;
    }
    else if( m > y){
        cout << "Y " << y;
    }
    else
        cout << "Y M " <<y;

    
    
}