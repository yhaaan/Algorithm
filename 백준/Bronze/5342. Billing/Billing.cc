#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<std::string, double> m = {
        {"Paper", 57.99},
        {"Printer", 120.50},
        {"Planners", 31.25},
        {"Binders", 22.50},
        {"Calendar", 10.95},
        {"Notebooks", 11.20},
        {"Ink", 66.95}
    };

    string str;
    float sum = 0;
    while(cin >> str && str != "EOI"){
        sum += m[str];
    }

    cout << '$' <<sum;
}