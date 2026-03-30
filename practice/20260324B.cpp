#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    getline(cin,s);
     map<string,int> mp;
    while(t--){
        getline(cin,s);
        int num=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                num=i;
                break;
            }
        }
        string a="";
        for(int i=0;i<num;i++){
            a.push_back(s[i]);
        }
        mp[a]++;
    }
    for(auto i :mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}