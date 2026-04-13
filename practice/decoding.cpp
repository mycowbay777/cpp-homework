#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        string line;
        int next=0;
        cin>>line;
        cout<<"Case "<<k<<": ";
        for(int i=0;i<line.length();i++){
            if(isalpha(line[i])){
                char letter=line[i];
                int sum=0;
                next=i+1;
                while(isdigit(line[next])){
                    sum=sum*10+(line[next]-'0');
                    next++;
                }
                for(int j=0;j<sum;j++){
                    cout<<letter;
                }
                i=next-1;
            }
            
        }
        cout<<endl;
    }
}