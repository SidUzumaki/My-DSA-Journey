#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n==1){
        return 1;
    }
    fact= n * factorial(n-1);
    return fact;
}

int main(){
    int x,y;
    cout<<"Enter a number: ";
    cin>>y;
    x = factorial(y);
    cout<<"The factorial of the number is: "<<x;
    return 0;
}