#include <iostream>
#include <string>
using namespace std;
int next(string str[3]);
void fb(int i);
int main() {
    int i;
    string str[3];
    for(i=0;i<3;i++)
        cin >> str[i];
    i = next(str);
    fb(i);
    
    return 0;
}


void fb(int i){
    if(i%3==0 && i%5==0)
        cout << "FizzBuzz";
    else if(i%3==0)
        cout << "Fizz";
    else if(i%5==0)
        cout << "Buzz";
    else
        cout << i; 
}

int next(string str[3]){
    for(int i=0;i<3;i++){
        if(str[i]=="Fizz" || str[i] == "Buzz" || str[i]=="FizzBuzz")
            continue;
        return stoi(str[i])+3-i;
    }
    return -1;
}