#include<iostream>
using namespace std;

int oddocc(int a[], int n){
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count%2!=0){
                return a[i];
            }
    }
}

//Effiecient solution 
int bitoddocc(int a[], int n){
    int res=a[0];
    for(int i=1; i<n; i++){
        res=res^a[i];
    }
    return res;
}

int main(){
    int n=7;
    int a[7]={2,2,5,3,3,7,7};
    cout<<oddocc(a,n)<<endl;
    cout<<bitoddocc(a,n);
    return 0;
}