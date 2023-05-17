#include <bits/stdc++.h>

using namespace std;

int n;
char board[10000][10000];

void solve(int x,int y,int cnt){
    for(int i=x+(cnt/3); i<x+(cnt/3)*2; i++){
        for(int j=y+(cnt/3); j<y+(cnt/3)*2; j++){
            board[i][j]=' ';
        }
    }

    if(cnt>3){
        solve(x,y,cnt/3);
        solve(x,y+cnt/3,cnt/3);
        solve(x+cnt/3,y,cnt/3);
        solve(x+(cnt/3)*2,y,cnt/3);
        solve(x+(cnt/3)*2,y+cnt/3,cnt/3);
        solve(x,y+(cnt/3)*2,cnt/3);
        solve(x+cnt/3,y+(cnt/3)*2,cnt/3);
        solve(x+(cnt/3)*2,y+(cnt/3)*2,cnt/3);
    }
}

int main(){
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            board[i][j]='*';
        }
    }
    solve(0,0,n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j];
        }
        cout<<'\n';
    }
}