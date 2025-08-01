#include <iostream>
using namespace std;

int main() {
    int n , w,h;
    cin >> n >> w>>h;
    int k;
    float size = w*w + h*h;
    for(int i = 0 ; i < n ; i ++){
        cin >> k;
        if(k*k <= size){
            cout << "DA\n";
        }
        else{
            cout << "NE\n";
        }
    }
}