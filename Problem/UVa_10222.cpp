#include<bits/stdc++.h>
using namespace std;

int main(){
    string keyboard={"`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"};
    string input;
    while(getline(cin,input)){
        for(int i=0;i<input.length();i++){
            if(input==" "){
                cout<<" ";
            }
            for(int k=0;k<keyboard.size();k++){
                if(input[i]==keyboard[k]){
                    input[i] = keyboard[k-2];
                }
            }
        }
        for(int i=0;i<input.size();i++){
            cout<<input[i];
        }
        cout<<endl;
    }
}