#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int first=1;
    cin>>t;
    string s;
    getline(cin,s);//吃掉換行符號
    getline(cin,s);//吃掉空行
    while(t--){
        if(first!=1){
            cout<<'\n';
        }
        first++;
        map<string,int> mp;
        int sum=0;
        while(getline(cin,s)&&s!=""){
            mp[s]++;
            sum++;
        }
        for(auto i:mp){
            cout<<i.first<<" "<<fixed<<setprecision(4)<<(double)i.second/sum*100<<'\n';
        }

    }
}