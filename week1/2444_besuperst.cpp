#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i=-(num-1); i<=num-1; i++){
        for(int k = 0; k<abs(i); k++) cout<<" ";
        int p =2*num-1-2*abs(i);
        for(int k = 0; k<p; k++) cout<<"*";
        for(int k = 0; k<abs(i); k++) cout<<" ";
        cout<<'\n';
    }

    return 0;
}
