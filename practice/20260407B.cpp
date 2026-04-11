#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> job(n);
        for(int i=0;i<n;i++){
            cin>>job[i];
        }
        int minutes =0;
        while(1){
            int maxp=0;
            for(int i=0;i<job.size();i++){
                if(job[i]>maxp){
                    maxp=job[i];
                }
            }
            if(job[0]<maxp){
                job.push_back(job[0]);
                job.erase(job.begin());
                if(m==0){
                    m=job.size()-1; //更新m資料的位置
                }
                else{
                    m--;
                }
            }
            else{
                minutes++;
                if(m==0){
                    cout<<minutes<<endl;
                    break;
                }
                job.erase(job.begin());
                m--;
            }
        }
    }
}