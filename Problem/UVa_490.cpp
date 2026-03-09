#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr[105];
    int rownum=0;
    int maxlong =0;
    while(getline(cin,arr[rownum])){
        int rowlong = (arr[rownum]).length();
        if(rowlong>maxlong){
            maxlong = rowlong;
        }
        rownum++;
    }
    for(int i=0;i<maxlong;i++){
        for(int j=rownum-1;j>=0;j--){ //rownum會多1 所以要扣掉
            if( i <arr[j].length()){
                cout<<arr[j][i];
            }
            else{
                cout<<' ';
            }
        }
        cout<<'\n';
    }
}