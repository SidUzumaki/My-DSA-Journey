#include<iostream>
#include<vector>
using namespace std;

// bool isPrime(int x){
//     if(x==1){
//         return false;
//     }
//     if(x==2||x==3){
//         return true;
//     }
//     if(x%2==0||x%3==0){
//         return false;
//     }
//     for(int i=5; i*i<=x; i=i+6)
//     { 
//         if(x%i==0||x%(i+2)==0){
//             return false;
//         }
//     }
//     return true;
// }

void sieve(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(int j=2*i; j<=n; j=j+i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(isPrime[i])
            cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sieve(n);
    return 0;
}