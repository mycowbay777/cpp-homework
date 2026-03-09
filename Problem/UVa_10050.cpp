#include<bits/stdc++.h>

using namespace std;



int main(){

    //用0 1陣列紀錄有無重複算到的罷工天

    //再把所有固定放假的兩天扣掉 陣列中除7餘5和餘6的數

    int t,n,p,day;

    cin>>t;

    while(t--){
        int count =0;
        int base[3700]={};
        cin>>n>>p;
        for(int i=0;i<p;i++){
            cin>>day;
            int gap = day;
            for(int k=0;k<n/gap;k++){ //記得用gap去算迴圈 不藥用day
                if(!(day % 7 == 0 || day % 7 == 6)){
                    base[day] = 1;
                }
                day+=gap;
            }
        }
        for(int i=1;i<=n;i++){
            if(base[i]==1){
                count++;
            }
        }
        cout<<count<<'\n';
    }
}