#include<bits/stdc++.h>
using namespace std;

int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={1,0,-1,1,-1,1,0,-1};

int main(){
    int x,y;
    int filenum=1;
    while(cin>>x>>y){
        if(filenum!=1){
            cout<<endl;
        }
        if(x==0&&y==0){
            return 0;
        }
        vector<string> s(x);
        vector<vector<int>> mmm(x,vector<int>(y,0));
        for(int i=0;i<x;i++){
            cin>>s[i];
            for(int j=0;j<y;j++){
                if(s[i][j]=='*'){
                    for(int k=0;k<8;k++){
                        int nx=i+dx[k];
                        int ny=j+dy[k];
                        if(nx>=0&&nx<x&&ny>=0&&ny<y){
                            mmm[nx][ny]++;
                        }
                    }
                }
            }
        }
        cout<<"Field #"<<filenum<<":"<<endl;
        filenum++;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(s[i][j]=='*'){
                    cout<<"*";
                }
                else{
                    cout<<mmm[i][j];
                }
            }
            cout<<endl;
        }
    }
}