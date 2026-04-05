#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string move;
    vector<string> website(105);
    website[0] ={"http://www.acm.org/"};
    int website_num=0;
    int max_website_num=0;
    while(cin>>move&&move!="QUIT"){
        if(move=="VISIT"){
            website_num++;
            max_website_num = website_num;
            cin>>website[website_num];
            cout<<website[website_num]<<endl;
        }
        else if(move=="BACK"){
            if(website_num-1<0){
                cout<<"Ignored"<<endl;
            }
            else{
                website_num-=1;
                cout<<website[website_num]<<endl;
            }
        }
        else if(move=="FORWARD"){
            if(website_num+1>max_website_num){
                cout<<"Ignored"<<endl;
            }
            else{
                website_num+=1;
                cout<<website[website_num]<<endl;
            }
        }
    }
    return 0;
}