#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        double p;
        cin>>n>>p>>k;
        double q = 1.0 -p;
        if(p==0){
            cout<<0.0000<<'\n';
        }
        else{
            double ans = (pow(q,k-1)*p)/(1.0-pow(q,n));
            cout<<fixed<<setprecision(4)<<ans<<'\n';
        }
    }
}