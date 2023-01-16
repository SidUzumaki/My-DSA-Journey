#include<iostream>
using namespace std;

/*
void Kthbit(int n,int k){
    int temp=pow(2,(k-1));
    if(n&temp!=0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
*/

void Kthbit(int n,int k){
    int temp = (1<<(k-1));
    if(n&temp!=0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
void Kthbit2(int n,int k){
    int temp = (n>>(k-1));
    if(temp&1!=0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    int n,k;
    cout<<"Enter a number and Kth bit: "<<endl;
    cin>>n>>k;
    Kthbit(n,k);
    return 0;
}