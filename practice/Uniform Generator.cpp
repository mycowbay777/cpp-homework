#include<bits/stdc++.h>
using namespace std;


int main(){
    int step;
    int mod;
    int seed=0;
    while(cin>>step>>mod){
        int count=1;
        for(int i=0;i<mod;i++){
            seed = (seed+step)%mod;
             if(seed!=0){
                count++;
             }
        }
        cout<<setw(10)<<step<<setw(10)<<mod;
        if(count==mod){
            cout<<'     '<<"Good Choice";
        }
        else{
            cout<<'     '<<"Bad Choice";
        }
    }
    
}