#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    int i = 1;
    while (getline(cin, line)) {
        if (line == "0") {
            //cout << "입력 종료를 감지했습니다." << endl;
            break;
        }
        cout << "Case "<< i++<<": Sorting... done!\n";
        
        
    }
}