#include<bits/stdc++.h>
using namespace std;
//dfs的用法是經過每一個節點會尋找到最深的項 找到底之後在跳會去下一個節點

vector<int> gg[105];
bool visited[105];
void dfs(int u){
    for(int v:gg[u]){ //這裡的for迴圈會把gg[u]裡面的項存到v再去跑
        if(!visited[v]){
            visited[v]=true;
            dfs(v);
        }
    }
}
int main(){
    int n;
    while(cin>>n&&n!=0){ //每次都要初始化
        for(int i=0;i<=n;i++){
            gg[i].clear();
        }
        int u;
        while(cin>>u&&u!=0){
            int v;
            while(cin>>v&&v!=0){
                gg[u].push_back(v);
            }
        }
        int pointsum;
        cin>>pointsum;
        for(int i=0;i<pointsum;i++){
            int pointnum;
            cin>>pointnum;
            fill(visited,visited+101,false); //初始化  fill(起始位置, 結束位置, 要填入的值);
            dfs(pointnum);
            
            vector<int> inaccessible;
            for(int i=1;i<=n;i++){
                if(!visited[i]){
                    inaccessible.push_back(i);
                }
            }
            cout<<inaccessible.size();
            for(auto i:inaccessible){
                cout<<" "<<i;
            }
            cout<<endl;
        }
    }
    
}