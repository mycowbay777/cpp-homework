#include<bits/stdc++.h>
using namespace std;

int main(){
    string move;
    vector<string> website;
    website[0] ={"http://www.acm.org/"};
    int website_num=1;
    while(cin>>move){
        if(move=="VISIT"){
            cin>>website[website_num];
            cout<<website[website_num];
            website_num++;
        }
        else if(move=="BACK"){
            if(website_num-1<0){
                cout<<"Ignored";
            }
            else{
                cout<<website[website_num-1];
            }
        }
        else if(move=="FORWARD"){

        }
    }
}