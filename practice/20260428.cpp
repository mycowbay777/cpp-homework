#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,W;
    cin>>N>>W;
    vector<long long> gg(W+1,0); //要開到W個空間
    for(int i=0;i<N;i++){
        int v,w;
        cin>>v>>w;
        for(int j=W;j>=w;j--){
            gg[j]=max(gg[j],gg[j-w]+v); //從後面開始跑到前面 看每個重量得最優值是多少 想要放多少重量的東西就要找相對符合的另一個重量 最後輸出題目要的總重
        }
    }
    cout<<gg[W]<<endl;
    
}