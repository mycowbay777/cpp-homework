#include<bits/stdc++.h>
#include<stack> //後進先出
using namespace std;

int main(){
    int n;
    while(cin>>n&&n!=0){
        while(1){
            vector<int> target(n);
            cin>>target[0];
            if(target[0]==0){
                break;
            }
            for(int i=1;i<n;i++){
                cin>>target[i];
            }
            vector<int> station;
            int current_train=1;
            bool possible = true;
            for(int i=0;i<n;i++){
                while(current_train<=n&&(station.empty()||station.back()!=target[i])){ //如果車站頂端不是我們要的，且還有車廂在 A 方向，就一直進站
                    station.push_back(current_train);
                    current_train++;
                }
                if(!station.empty()&&station.back()==target[i]){
                    station.pop_back();
                }
                else{
                    possible = false;
                    break;
                }
            }
            if(possible){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }    
        cout<<endl;
    }
}