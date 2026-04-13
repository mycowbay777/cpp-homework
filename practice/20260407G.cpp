#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    set<string> dic;
    while(getline(cin,line)){
        string currentword="";
        for(int i=0;i<line.length();i++){
            if(isalpha(line[i])){
                currentword += tolower(line[i]);
            }
            else{
                if(currentword!=""){
                    dic.insert(currentword);
                    currentword="";
                }
            }
        }
        if(currentword!=""){
            dic.insert(currentword);
        }
    }
    for(auto word:dic){
        cout<<word<<endl;
    }
}