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
        for(int k=i+1; k<9; k++){
            if(list[i]+list[k]==rest){
                list[i]=-1;
                list[k]=-1;
            }
        }
    }
    for(int i =0; i<9; i++){
        if(list[i]!=-1){
            cout<<list[i];
            cout<<'\n';
        }
    }
    return 0;
}