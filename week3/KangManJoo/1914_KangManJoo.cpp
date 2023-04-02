#include <bits/stdc++.h>

using namespace std;

int n;
long long solveCost(int cur){
    if(cur==1) return 1;
    return 2*solveCost(cur-1)+1;
}

void solve(int cur,int start,int mid, int end){
    if(cur==0) return;
    
    solve(cur-1,start,end,mid);
    cout<<start<<" "<<end<<'\n';
    solve(cur-1,mid,start,end);
   
    return;
}

int main(){
    cin>>n;
     string a = to_string(pow(2,n));
    int x = a.find('.');
    a = a.substr(0,x);
    a[a.length()-1] -=1;
    cout << a << '\n';
    if(n<=20){
        solve(n,1,2,3);
    }
    return 0;
}
