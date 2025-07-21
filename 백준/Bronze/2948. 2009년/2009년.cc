#include <iostream>
using namespace std;

void printday(int k);
int main() {
    int d,m;
    int a = 0;
    cin >> d >> m;

    if(m == 1) a = 3;
    if(m == 2) a = 6;
    if(m == 3) a = 6;
    if(m == 4) a = 2;
    if(m == 5) a = 4;
    if(m == 6) a = 0;
    if(m == 7) a = 2;
    if(m == 8) a = 5;
    if(m == 9) a = 1;
    if(m == 10) a = 3;
    if(m == 11) a = 6;
    if(m == 12) a = 1;
    

    
    
    
    printday((d+a)%7);
}


void printday(int k){
    if(k == 1){
        cout << "Monday";
    }
    if(k == 2){
        cout << "Tuesday";
    }
    if(k == 3){
        cout << "Wednesday";
    }
    if(k == 4){
        cout << "Thursday";
    }
    if(k == 5){
        cout << "Friday";
    }
    if(k == 6){
        cout << "Saturday";
    }
    if(k == 0){
        cout << "Sunday";
    }
}