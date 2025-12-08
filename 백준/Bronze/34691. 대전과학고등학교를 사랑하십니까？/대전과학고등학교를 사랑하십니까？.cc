#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    while(str != "end"){
        if(str == "animal") cout << "Panthera tigris\n";
        else if(str == "tree") cout << "Pinus densiflora\n";
        else if(str == "flower") cout << "Forsythia koreana\n";

        cin >> str;
    }
}