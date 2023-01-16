#include<iostream>
using namespace std;

//Efficient, Best solution
//We check how many 5 are present in the prime factorization of the number
//2 and 5 gives us a 0 and no of 2 > no of 5. So, we only have to find the no of 5
//Numbers like 25,125... have more than one 5 so we have to find them too
// Time complexity of this solution is Theta(logn)

int trailingzero(int n){
    int count=0;
    for(int i=5 ; i<=n ; i*=5 ){
        count= count + n/i;
    }
    return count;
}



// Naive solution, causes overflow for small values too
// int trailingzero(int n){
//     int fact=1, count=0 ;
//     for(int i=1 ; i <= n ; i++){
//         fact=fact*i;
//     }

//     while(fact%10==0){
//         count+=1;
//         fact=fact/10;
//     }
//     return count;
// }

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Number of zeroes in it's factorial is: "<<trailingzero(x);
    return 0;
}