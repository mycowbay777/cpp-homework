#include<bits/stdc++.h>
using namespace std;

int aaa(char c){ //換算成0-62
    if(isdigit(c)) return c-'0';
    if(isupper(c)) return c-'A'+10;
    if(islower(c)) return c-'a'+36;
}

int main(){
    string s;
    while(cin>>s){
        long long sum=0;
        int base=1;
        for(int i=0;i<s.length();i++){
            int num = aaa(s[i]);
            sum+=num; //把數字的每一位加起來 用來判斷是否可被N-1整除
            if(num>base){
                base = num;
            }
        }
        int ans=0; //用來判斷是否可以被所有n-1整除
        for(int n=base+1;n<=62;n++){
            if(sum%(n-1)==0){
                ans =n;
                break;
            }
        }
        if(ans!=0){
            cout<<ans<<endl;
        }
        else{
            cout<<"such number is impossible!"<<endl;
        }
    }
}