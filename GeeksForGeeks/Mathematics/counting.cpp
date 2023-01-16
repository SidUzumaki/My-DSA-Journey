#include<iostream>
using namespace std;

//Time complexity of this function is Theta of d.(d is number of digits in the number)
int digits(int x){
    int result=0;
    while(x>0){
        x=x/10;
        result+=1;
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Total number of digits: "<<digits(n);
    return 0;
}