#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    while(getline(cin,line)){
        while(true){
            size_t pos = line.find("BUG");
            if(pos == string::npos){
                break;
            }
            line.erase(pos,3);
        }

        cout << line << "\n";
    }
}