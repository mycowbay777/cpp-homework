#include<iostream>
#include<vector>
using namespace std;
//令每一個節點沒有顏色都是-1
bool dfs(int n,int c,vector<int> & color,const vector<vector<int>> & adj){ //const &這個是可以節省時間 把資料全部帶過來 只有&的是可以更改變動資料 有const &的是唯讀
    color[n]=c;
    for(int v:adj[n]){ //找相鄰的節點
        if(color[v]==-1){
            if(!dfs(v,1-c,color,adj)){
                return false;
            }
        }
        else if(color[n]==color[v]){
            return false;
        }
    }
    return true;
}
int main(){
    int pointsum;
    while(cin>>pointsum&&pointsum!=0){
        int l;
        cin>>l;
        vector<vector<int>> adj(pointsum);
        for(int i=0;i<l;i++){
            int n,v;
            cin>>n>>v;
            adj[n].push_back(v);
            adj[v].push_back(n);
        }
        vector<int> color(pointsum,-1); //建立一個大小為pointsum的陣列 並初始化為-1
        if(dfs(0,0,color,adj)){
            cout<<"BICOLORABLE."<<endl;
        }
        else{
            cout<<"NOT BICOLORABLE."<<endl;
        }
    }
}