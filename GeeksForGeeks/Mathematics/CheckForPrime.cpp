#include<iostream>
using namespace std;

/*Naive solution
bool isPrime(int x){
    if(x==1){
        return false;
    }
    if(x==2||x==3){
        return true;
    }
    if(x%2==0||x%3==0){
        return false;
    }
    for(int i=2; i<x; i++) || in the more effecient solution we use i*i= x --> for(int i=2; i*i<x; i++)
    { 
        if(x%i==0){
            return false;
        }
    }
    return true;

BEST SOLUTION

    for(int i=5; i*i<=x; i=i+6)
    { 
        if(x%i==0||x%(i+2)==0){
            return false;
        }
    }
    return true;
}
*/

int main(){
    int n;
    cout<<"Enter a number to check for Prime: ";
    cin>>n;
    if(isPrime(n))
        cout<<"The input number is a Prime number.";
    else if(isPrime(n)==-1)
        cout<<"The input number is neither a Prime nor a composite number.";
    else
        cout<<"The input number is not a Prime number.";

    return 0;
}