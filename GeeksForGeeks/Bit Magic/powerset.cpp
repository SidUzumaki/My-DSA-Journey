#include<bits/stdc++.h>
using namespace std;

void printpowerset(char* set, int setsize){
    unsigned int powsetsize=pow(2,setsize);
    int counter,j;
    for(counter=0; counter<powsetsize;counter++){
        for(j=0;j<setsize;j++){
            if(counter&(1<<j)){
                cout<<set[j];
            }
        }
        cout<<"\n";
    }
}

int main(){
    char set[]={'a','b','c'};
    printpowerset(set,3);
    return 0;
}