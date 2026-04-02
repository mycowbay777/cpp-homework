#include<bits/stdc++.h>
using namespace std;

int main(){
    int button,press;
    string a={"ABCDE"};
    while(cin>>button>>press){
        if(button==1){
            for(int i=0;i<press;i++){
                a.push_back(a[0]);
                a.erase(0,1); //從0開始到第一個字元
            }
        }
        else if(button==2){
            for(int i=0;i<press;i++){
                a.insert(0,1,a.back());
                a.pop_back(); //刪掉最後一個字元
            }
        }
        else if(button==3){
            for(int i=0;i<press;i++){
                swap(a[0],a[1]);
            }
        }
        if(button==4&&press==1){
            cout<<a<<endl;
            return 0;
        }
    }
}