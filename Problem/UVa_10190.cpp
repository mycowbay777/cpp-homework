#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m;
    while(cin>>n>>m){
        if (m < 2 || n < 2 || n < m) {
            cout << "Boring!" << endl;
            continue;
        }
        int check=0;
        vector<long long int> s;
        while(n>0){
            s.push_back(n);
            if(n==1){
                check=1;
                break;
            }
            if(n%m!=0){
                check=0;
                break;
            }
            n=n/m;
        }
        if(check==1&&s.back()==1){
            for(int i=0;i<s.size()-1;i++){
                cout<<s[i]<<" ";
            }
            cout<<"1";
            cout<<endl;
        }
        else{
            cout<<"Boring!"<<endl;
        }
    }
}