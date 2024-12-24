#include <iostream>
#include <set>
using namespace std;
int arr[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


void add(int n){
    arr[n-1] = 1;
}
void remove(int n){
    arr[n-1] = 0;
}
void check(int n){
    if(arr[n-1] == 1)
        cout << "1\n";
    else
        cout << "0\n";
}

void toggle(int n){
    if(arr[n-1] == 1)
        arr[n-1] = 0;
    else
        arr[n-1] = 1;
}

void all(){
    for(int i = 0;i <20 ;i++)
        arr[i] = 1;
}

void empty(){
    for(int i = 0;i <20 ;i++)
        arr[i] =0;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m;
    string cmd;
    int n;
    cin >> m;
    for(int i =0;i<m;i++){
        cin >> cmd;
        if(cmd == "add"){
            cin >> n;
            add(n);
        }
        else if(cmd == "remove"){
            cin>> n;
            remove(n);
        }
        else if(cmd == "check"){
            cin >> n;
            check(n);
        }
        else if(cmd =="toggle"){
            cin >> n;
            toggle(n);
        }
        else if(cmd == "all"){
            all();
        }
        else if(cmd == "empty"){
            empty();
        }
    }
    return 0;
}