#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    int t;
    string a;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++){
        getline(cin,a);
        int longg = a.length();
        if(longg>=12){
            cout<<a[0]<<longg-2<<a[longg-1]<<'\n';
        }
        else{
            cout<<a<<'\n';
        }
    }
}