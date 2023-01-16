#include<iostream>
#include<algorithm>
using namespace std;

// Naive solution
// int gcd(int n, int m){
//     int a=0, x= min(n,m);
//     for(int i = x ; i > 0 ; i--){
//         if(n%i==0 && m%i==0){
//             a=i;
//             break;
//         }
//     }
//     return a;
// }

//Better Solution using Basic version of Euclidean's Algorithm with repeated subtraction
// int gcd(int n, int m){
//     while(m!=n){
//         if(m>n){
//             m=m-n;
//         }
//         else{
//             n=n-m;
//         }
//     }
//     return m;
// }

// Optimised version of Euclidean's Algorithm
int gcd(int n, int m){
    if(m==0){
        return n;
    }
    return gcd( m , n%m );  
}

int main(){

    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}