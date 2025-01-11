#include <iostream>
#include <vector>
using namespace std;

void inputarr(int N,vector<vector<int>> &arr);
void printarr(int N,vector<vector<int>> &arr);
int checkbox(int sx,int sy,int ex,int ey , vector<vector<int>> &arr);
void paper(int sx,int sy,int ex,int ey , vector<vector<int>> &arr);

int blue = 0;
int white = 0;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> arr(N, vector<int>(N));
    inputarr(N,arr);
    //printarr(N,arr);

    paper(0,0,N,N,arr);
    cout << white <<endl << blue;
    return 0;
}

void paper(int sx,int sy,int ex,int ey , vector<vector<int>> &arr){
    
    int check = checkbox(sx,sy,ex,ey,arr);
    //cout << "("<<sx << "," <<sy << ") " << "~ (" <<ex << "," << ey << ") :: "<< check <<endl;
    if(check != -1){
        if(check == 0)
            white ++;
        if(check == 1)
            blue ++;
    }
    else{
        int x[4],y[4];
        x[0] = sx; x[1] = (ex+sx)/2; x[2] = sx; x[3] = (ex+sx)/2;
        y[0] = sy; y[1] = sy; y[2] = (ey+sy)/2; y[3] = (ey+sy)/2; 
        paper(x[0], y[0], (ex+sx)/2, (ey+sy)/2 , arr); //1
        paper(x[1], y[1], ex, (ey+sy)/2 , arr); //2
        paper(x[2], y[2], (ex+sx)/2, ey , arr); //3
        paper(x[3], y[3], ex, ey , arr); //4
    }
}

void inputarr(int N,vector<vector<int>> &arr){
    for(int i = 0; i< N ;i++){
        for(int j = 0; j< N;j++)
            cin >> arr[i][j];
    }
}

void printarr(int N,vector<vector<int>> &arr){
    for(int i = 0; i< N ;i++){
        for(int j = 0; j< N;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int checkbox(int sx,int sy,int ex,int ey , vector<vector<int>> &arr){
    int c = arr[sy][sx];
    for(int i = sy; i< ey;i++){
        for(int j = sx; j< ex ; j++){
            if(arr[i][j] != c)
                return -1;
        }
    }
    return c;
}