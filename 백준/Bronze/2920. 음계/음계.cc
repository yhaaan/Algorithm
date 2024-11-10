#include <iostream>
#include <string>
using namespace std;

int main() {
    int num , before = 0;
    int cnt = 0;
    for(int i = 0 ; i <8;i++){
        cin >> num;
        if(num > before) cnt ++;
        else cnt --;
        before = num;
    }

    if(cnt == 8)
        cout << "ascending";
    else if(cnt == -6)
        cout << "descending";
    else
        cout <<"mixed";
    return 0;
}