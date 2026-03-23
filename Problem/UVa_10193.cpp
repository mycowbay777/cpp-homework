#include<bits/stdc++.h>
using namespace std;

int change(string s){
    int res=0;
    for(int i=0;i<s.length();i++){
        res = res*2+(s[i]-'0');
    }
    return res;
}
int gcd(int a,int b){ //用輾轉相除法來求最大公因數
    while(b!=0){
        a = a%b;
        swap(a,b);
    }
    return a;
}

int main(){
    int t;
    cin>>t;
    string s1,s2;
    for(int i=1;i<=t;i++){
        cin>>s1>>s2;
        int n1=change(s1);
        int n2=change(s2);

        int g=gcd(n1,n2);
        cout<<"Pair #"<<i<<": ";
        if(g>1){
            cout<<"All you need is love!"<<endl;
        }
        else {
            cout<<"Love is not all you need!"<<endl;
        }
    }
}