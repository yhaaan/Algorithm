#include <iostream>
using namespace std;

int main() {
    int x,y;

    cin >> x >> y;
    while(x+y){
        if(x+y == 13){
            cout << "Never speak again.\n";
        }
        else if(x>y){
            cout <<"To the convention.\n";
        }
        else if (x<y){
            cout << "Left beehind.\n";
        }
        else{
            cout<<"Undecided.\n";
        }
        cin >> x >>y;
    }
}