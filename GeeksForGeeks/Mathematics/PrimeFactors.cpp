#include<iostream>
using namespace std;

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
    for(int i=5; i*i<=x; i=i+6){
        if(x%i==0||x%(i+2)==0)
        return false;
    }
    return true;
}

//First Naive solution.
// void PrimeFactors(int x){
//     for(int i=2; i<=x; i++){
//         int n=i;
//         if(isPrime(i)){
//             while(x%n==0){
//                 cout<<i<<" ";
//                 n=n*i;
//             }
//         }
//     }
// }
//Second effeicent solution
void PrimeFactors(int x){
    if(x<=1){
        return;
    }
    while(x%2==0){
        cout<<"2 ";
        x=x/2;
    }
    while(x%3==0){
        cout<<"3 ";
        x=x/3;
    }
    for(int i=5; i*i<x; i=i+6){
        while(x%i==0){
            cout<<i<<" ";
            x=x/i;
        }
        while(x%(i+2)==0){
            cout<<(i+2)<<" ";
            x=x/(i+2);
        }
    }
    if(x>3){
        cout<<x<<" ";
    }
}//The time complaxity of this code is theta of square root of x.

int main(){
    int n;
    cout<<"Enter a number to find it's Prime factors: ";
    cin>>n;
    PrimeFactors(n);
    return 0;
}