#include<bits/stdc++.h>
using namespace std;

int n;
int result[20];
bool used[20];
//找質因數可以找到num的平方根就好 因為如果是因數的話就會是對半的
bool isprime(int num){
    if(num<2) return false;
    for(int i=2;i*i<=num;i++){ //i*i<=num就是i<=num的平方根
        if(num%i==0) return false;
    }
    return true;
}
void dfs(int cur){
    if(cur==n){
        if(isprime(result[0]+result[n-1])){
            for(int i=0;i<n;i++){
                if(i==n-1){
                    cout<<result[i];
                }
                else{
                    cout<<result[i]<<" ";
                }
            }
            cout<<endl;
        }
        return;
    }
    for(int i=2;i<=n;i++){
        if(!used[i]){
            if(isprime(i+result[cur-1])){
                used[i]=true;
                result[cur]=i;
                dfs(cur+1); //停滯 先去找後面的
                used[i]=false;
            }
        }
    }
}
int main(){
    int casenum=1;
    while(cin>>n){
        if(casenum!=1) cout<<endl;
        cout<<"Case "<<casenum++<<":"<<endl;
        for(int i=0;i<20;i++){
            used[i]=false;
        }
        result[0]=1;
        dfs(1);
    }
}