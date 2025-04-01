#include <iostream>
using namespace std;

int main() {
    int a[4],b[4];
    int suma, sumb;
    suma= 0;
    sumb = 0;

    for(int i = 0; i < 4; i++){
        cin >> a[i];
        suma += a[i];
    }
    for(int i = 0; i < 4; i++){
        cin >> b[i];
        sumb += b[i];
    }

    
    int max = suma > sumb ? suma : sumb;
    cout <<max;
}