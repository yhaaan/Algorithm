#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (std::getline(std::cin, str)) {
        std::cout << str << std::endl;
    }
}