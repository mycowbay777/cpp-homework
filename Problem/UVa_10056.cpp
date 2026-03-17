#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        double p;
        double q = 1-p;
        cin>>n>>p>>k;
        if(p==0){
            cout<<0.0000<<'\n';
        }
        else{
            int ans = (pow(q,k-1)*p)/(1-pow(q,n));
            cout<<ans;
        }
    }
}