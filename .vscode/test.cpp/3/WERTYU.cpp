#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string keyboard={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    string enter;
    while(getline(cin,enter)){
        for(int i=0;i<enter.length();i++){
            enter[i]==toupper(enter[i]);
        }
         for(int i=0;i<enter.length();i++){
            if(enter[i]==' '){
                    cout<<' ';
                }
            for(int k=0;k<48;k++){
                if(enter[i]=='Q'||enter[i]=='A'||enter[i]=='Z'){
                    cout<<enter[i];
                }
                if(enter[i]==keyboard[k]){
                    cout<<keyboard[k-1];
                }
            }
        }
    }
    
}