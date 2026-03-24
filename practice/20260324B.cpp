#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        int num=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                int num=i;
                break;
            }
        }
        string a;
        for(int i=0;i<num;i++){
            a[i] = s[i];
        }
        map<string,int> mp;
    }
}