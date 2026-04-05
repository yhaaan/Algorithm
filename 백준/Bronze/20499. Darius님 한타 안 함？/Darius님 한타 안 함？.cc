#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str,temp;
    cin >> str;

    stringstream ss(str);
    int nums[3];
    int i = 0;
    while(getline(ss,temp,'/') && i<3){
        nums[i++] = stoi(temp);
    }
    int a = nums[0], b = nums[1] , c = nums[2];

    if(a+c < b || b == 0) cout << "hasu";
    else cout << "gosu";
}