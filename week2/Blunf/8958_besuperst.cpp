#include<iostream>

using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    string list[cnt];

    for(int i=0;i<cnt;i++) cin >> list[i];

    for(int i=0;i<cnt;i++){
        int total =0;
        int k=1;
        for(char c : list[i]){
            if(c == 'O'){total=total+k; k++;}
            else{k=1;}
        }
        cout<<total;
        cout<<"\n";
    }
}