#include <iostream>
using namespace std;

int n;
int arr[200010];
int g[10];
int answer;

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin >> n;


    for(int i =0 ; i< 10;i++)
        g[i] = 0;
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
        
    }
    

    int a, b;
    a = 0;
    b = -1;
    answer = 0;

    int cnt = 0;
    
    while(true){
        if(answer <= 2){
            b++;
            if(g[arr[b]] == 0){
                answer ++;
            }   
            g[arr[b]] ++;

            if(answer <=2 )
                cnt = cnt < b-a+1? b-a+1: cnt; //cnt 갱신
                     
        
            

        }
        else if(answer > 2){
            a++;
            if(g[arr[a-1]] == 1){
                answer --;
            }
             g[arr[a-1]] --;
        }
        
        if(b >= n-1) break;
        //cnt = check(a,b);
        
    }
    cout << cnt;
    
}
