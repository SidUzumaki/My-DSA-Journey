#include<bits/stdc++.h>
using namespace std;

void twooddocc(int a[], int n){
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count&1!=0){
            cout<<a[i]<<" ";
        }
    }cout<<"\n";
}

//Effiecient solution
void bit2oddocc(int a[], int n){
    int res=a[0];
    for(int i=1; i<n; i++){
        res=res^a[i];
    }
    int k=(res &(~(res-1)));
    int res1=0,res2=0;
    for(int i=0; i<n; i++){
        if((a[i]&k)!=0){
            res1=res1^a[i];
        }
        else{
            res2=res2^a[i];
        }
    }
    cout<<res1<<" "<<res2;
}

int main(){
    int n=8;
    int a[8]={2,2,7,7,3,3,5,1};
    twooddocc(a,n);
    bit2oddocc(a,n);
    return 0;
}