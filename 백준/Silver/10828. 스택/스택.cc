#include <iostream>
#include <stack>
#include <string>
using namespace std;
/*
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/
stack<int> s; 
void push(){
    int x;
    cin >> x;
    s.push(x);
}
void pop(){
    if(s.size() == 0){
        cout << -1 << "\n";
        return;
    }
    cout << s.top() << "\n";
    s.pop();
}

void size(){
    cout << s.size() << "\n";
}
void empty(){
    if(s.empty()) cout << 1 << "\n";
    else cout << 0 << "\n";
}
void top(){
    if(s.size() == 0){
        cout << -1 << "\n";
        return;
    }
    cout << s.top() << "\n";
}
int main() {
    int n;
    string str;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str;
        if(str == "push") push();
        else if(str == "pop") pop();
        else if(str == "size") size();
        else if(str == "empty") empty();
        else if(str == "top") top();
    }
    return 0;
}