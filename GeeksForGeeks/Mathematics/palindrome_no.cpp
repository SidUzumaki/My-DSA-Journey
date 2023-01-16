#include<iostream>
using namespace std;

bool checkPalindrome(int a){
    int x = a;
    if(x>=0 && x<10){
        return true;
    }
    int rev=0 , last;
    while(x!=0){
        last = x%10;
        x = x/10;
        rev = rev*10 + last;
    }
    if(a==rev){
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    int x, n;
    cout<<"Enter a number : ";
    cin>>x;
    n=checkPalindrome(x);
    if(n==1){
        cout<<"The input number is a Palindrome";
    }
    else{
        cout<<"The input number is not a Palindrome";
    }
    return 0;
}

/*#include<iostream>
using namespace std;

bool isPalindrome(int x){
    int last=0, res=0, temp=x;
    while(temp>0){
        last=temp%10;
        temp/=10;
        res=res*10+last;
    }
    return (res==x);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPalindrome(n))
        cout<<"The input number is a Palindrome.";
    else
        cout<<"The input number is not a Palindrome.";
    return 0;
}*/