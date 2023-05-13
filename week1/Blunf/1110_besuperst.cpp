#include<iostream>

using namespace std;

int main(){
    int input;
    int cnt = 0;
    cout << "Enter a number: ";
    cin >> input;
    int num = input;

    while(true){
        if(-1<num && num<10){
            num=num*10;
        }
        num = (num%10)*10+(num/10+num%10)%10;
        cnt++;
        if(num == input){
            cout<<cnt;
            break;
        }
    }
}