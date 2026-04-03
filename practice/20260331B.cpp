#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    string shop;
    while(cin>>n){
        map<string,int> shops;
        string name;
        for(int i=0;i<n;i++){
            cin>>name;
            shops[name]=0;
        }
        cin>>m;
        while(m--){
            int price;
            string shop_name;
            for(int i=0;i<n;i++){
                cin>>price>>shop_name;
                shops[shop_name]+=price;
            }
            int memory_price = shops["memory"];
            int rank=1;
            for(auto i:shops){
                if(i.second>memory_price){
                    rank++;
                }
            }
            cout<<rank<<endl;
        }
        
    }
}