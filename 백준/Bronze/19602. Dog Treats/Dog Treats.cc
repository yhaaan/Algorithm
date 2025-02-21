#include <iostream>
using namespace std;




int main() {
    int s,m,l;
    cin >> s >> m >> l;
    int sum = s+ 2*m +3*l;
    if(sum >9) cout << "happy";
    else cout <<"sad";
}