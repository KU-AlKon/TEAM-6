#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int num;
    cin >> num;

    for(int i=-(num-1); i<=num-1; i++){
        for(int k = 0; k<abs(i); k++) cout<<" ";
        int p =2*num-1-2*abs(i);
        for(int k = 0; k<p; k++) cout<<"*";
        if(i!=num-1){
            for(int k = 0; k<abs(i)-1; k++) cout<<" ";
        }
        if(i!=num-1){
            cout<<'\n';
        }
    }
    return 0;
}