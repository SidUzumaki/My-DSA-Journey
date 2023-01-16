#include<iostream>
using namespace std;

// int setbits(int n){
//     int count=0;
//     if(n==0){
//         return 0;
//     }
//     while(n!=0){
//         if(n&1!=0){
//             count++;
//         }
//         n=n>>1;
//     }
//     return count;
// }

//Brian Kerningam's Algorithm
int setbits(int n){
    int res=0;
    while(n>0){
        n=n&(n-1);
        res++;
    }

    return res;
}

//Using table approch
int tbl[256];
void initialize(){
    tbl[0]=0;
    for(int i=1; i<256; i++){
        tbl[i]=i&1+tbl[i/2];
    }
}
int countsetbits(int n){
    return tbl[n&255]+tbl[(n>>8)]+tbl[(n>>16)]+tbl[(n>>24)];
}

// int setbits(int n){
//     int count=0;
//     if(n==0){
//         return 0;
//     }
    
//     return count;
// }

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<setbits(n)<<endl;
    cout<<countsetbits(n);
    return 0;
}