#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b;
    while(cin>>a>>b){
        long long int sum=0;
        if(a<b){
            swap(a,b);
        }
        sum = a-b;
        cout<<sum<<'\n';
    }
}