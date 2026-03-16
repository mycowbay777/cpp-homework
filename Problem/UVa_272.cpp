#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int k=0;
    while(getline(cin,a)){
        for(int i=0;i<a.length();i++){
            if(a[i]=='"'){
                if(k==0){
                    cout<<"``";
                    k=1;
                }
                else{
                    cout<<"''";
                    k=0;
                }
            }
            else{
                cout<<a[i];
            }
        }
        cout<<endl;
    }
}