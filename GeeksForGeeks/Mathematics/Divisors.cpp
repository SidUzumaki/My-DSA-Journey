#include<iostream>
using namespace std;

//First naive solution.
// void divisors(int n){
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

void divisors(int n){
    int i=1;
    for(i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    i--;
    for( ; i>=1; i--){
        if((n%i==0)&&(i!=n/i)){
            cout<<n/i<<" ";
        }
    }
}

int main(){
    int a;
    cout<<"Enter a number to find it's Divisors: ";
    cin>>a;
    divisors(a);
    return 0;
}