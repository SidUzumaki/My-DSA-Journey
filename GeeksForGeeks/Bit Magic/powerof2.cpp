#include<iostream>
using namespace std;

bool powerof2(int n){
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;
        if(count>1){
            return false;
        }
    }
    return true;
    //or you can just use return ((n&(n-1))==0);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(powerof2(n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}