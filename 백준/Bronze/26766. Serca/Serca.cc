#include <iostream>
using namespace std;
void p(){
    cout << " @@@   @@@ \n";
    cout << "@   @ @   @\n";
    cout << "@    @    @\n";
    cout << "@         @\n";
    cout << " @       @ \n";
    cout << "  @     @  \n";
    cout << "   @   @   \n";
    cout << "    @ @    \n";
    cout << "     @     ";
}

int main() {

    int n;
    cin >> n;
    for(int i= 0 ; i < n ; i++){
        p();
        if(i < n-1) cout <<endl;
    }
}

