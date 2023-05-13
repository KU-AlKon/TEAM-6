#include<iostream>
using namespace std;
int main(){
    int total=0;
    int list[9];
    
    for(int i =0; i<9; i++){
        cin >> list[i];
        total = total + list[i];
    }
    int rest = total - 100;
    for(int i=0; i<9; i++){
        for(int k=i; k<9;k++){
            if(list[i]+list[k]==rest){
                list[i]=0;
                list[k]=0;
            }
        }
    }
    for(int i =0; i<9; i++){
        if(list[i]!=0){
            cout<<list[i];
            cout<<'\n';
        }
    }
    return 0;
}