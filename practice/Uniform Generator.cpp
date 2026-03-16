#include<bits/stdc++.h>
using namespace std;


int main(){
    int step;
    int mod;
    
    while(cin>>step>>mod){
        int seed=0;
        int count=0;
        for(int i=0;i<mod;i++){
            seed = (seed+step)%mod;
            count++;
            if(seed==0&&i<mod-1){
                break;
            }
        }
        cout<<setw(10)<<step<<setw(10)<<mod;
        if(count==mod){
            cout<<"    Good Choice"<<'\n'<<'\n';
        }
        else{
            cout<<"    Bad Choice"<<'\n'<<'\n';
        }
    }
    
}