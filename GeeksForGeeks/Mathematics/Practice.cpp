#include<iostream>
using namespace std;

bool isPrime(int x){

    if(x==0||x==1){
        return true;
    }
    if(x==2){
        return true;
    }
    for(int i=2; i<x; i++){
        if(x/i){
            return false;
        }
    }
    return true;
}

int main(){
    int n,a;
    cout<<"Enter a number to check for Prime: ";
    cin>>n;
    a=isPrime(n);
    if(a)
        cout<<"The input number is a Prime number.";
    else
        cout<<"The input number is not a Prime number";

    return 0;
}