#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        int count=0;
        int carry=0;
        if(a==0&&b==0){
            return 0;
        }
        while(a>0||b>0){
            int num1,num2;
            
            num1 = a%10;
            num2 = b%10;
            if(num1+num2+carry>=10){
                a=a/10;
                b=b/10;
                carry =1;
                count++;
            }
            else{
                carry=0;
                a=a/10;
                b=b/10;
            }
        }
        if(count==1){
            cout<<"1 carry operation."<<endl;
        }
        else if(count>1){
            cout<<count<<" carry operations."<<endl;
        }
        else{
            cout<<"No carry operation."<<endl;
        }
    }
}