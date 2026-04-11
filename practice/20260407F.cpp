#include<map>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    while(n--){
        int type;
        string name;
        int num;
        cin>>type>>name;
        if(type==1){
            cin>>num;
            mp[name]+=num;
        }
        else if(type==2){
            mp.erase(name);
        }
        else if(type==3){
            cout<<mp[name]<<endl;
        }
    }
}