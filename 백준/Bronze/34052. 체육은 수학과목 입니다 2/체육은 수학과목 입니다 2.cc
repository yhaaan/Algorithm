#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for(int i =0;i < 4; i++){
        int n;
        cin >> n;
        sum += n;
    }

    if(sum <= 1500){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}