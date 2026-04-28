#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    int acot[26],bcot[26];
    while(cin>>a>>b){
        for(int i=0;i<26;i++){
            acot[i]=0;
            bcot[i]=0;
        }
        for(int i=0;i<a.length();i++){
            acot[a[i]-'a']++;
        }
        for(int i=0;i<b.length();i++){
            bcot[b[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(acot[i]>=1&&bcot[i]>=1){
                char alpha=acot[i+'a'];
            }
        }
    }
}