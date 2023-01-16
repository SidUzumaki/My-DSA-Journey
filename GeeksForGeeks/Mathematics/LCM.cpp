#include<iostream>
#include<algorithm>
using namespace std;

// Naive solution to find the LCM
// int LCM(int x, int y){
//     int res= max(x,y);
//     while(true){
//         if(res%x==0 && res%y==0){
//             return res;
//         }
//         res++;
//     }
// }

// Efficient Solution
// We use the formula : a*b = gcd(a,b)*lcm(a,b)
int gcd(int x, int y){
    if(y==0){
        return x;
    }
    return gcd( y , x%y);
}
int LCM(int x, int y){
    return (x*y)/(gcd(x,y));
}


int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<LCM(a,b);
    return 0;
}