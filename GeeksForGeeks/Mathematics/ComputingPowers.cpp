#include<iostream>
using namespace std;

int power(int x, int n){
    int res=1;
    for(int i=1; i<=n; i++){
        res=res*x;
    }
    return res;
}
int pow(int x, int n){
    if(n==0)
        return 1;
    int temp=pow(x,n/2);
    temp=temp*temp;
    if(n%2==0){
        return temp;
    }
    else
        return temp*x;
}
int iterativePow(int x,int n){
    int res=1;
    while(n>0/*n$1*/){
        if(n%2!= 0){
            res=res*x;
        }
        n=n/2/*n>>1*/;
        x=x*x;
    }
    return res;
}

int main(){
    int x,n;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Enter the Power to find: ";
    cin>>n;
    cout<<power(x,n)<<endl;
    cout<<pow(x,n)<<endl;
    cout<<iterativePow(x,n);
    return 0;
}