#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> a;
    while(n--){
        int type;
        int x;
        cin>>type>>x;
        if(type==1){
            a.insert(x);
        }
        else if(type==2){
            a.erase(x);
        }
        else if(type==3){
            if(a.find(x)!=a.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}