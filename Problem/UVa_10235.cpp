#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int num;
        int prime=1;
        num = sqrt(n); //sqrt是c++開根號的程式碼
        for(int i=2;i<=num;i++){ //做到n的平方根 可以節省時間
            if(n%i==0){
                prime=0;
                break;
            }
        }

        vector<int> new_n;
        int remainder;
        int nn=n;
        while(n!=0){
            remainder = n%10;
            n=n/10;
            new_n.push_back(remainder);
        }
        int total=0;
        for(int i=new_n.size()-1;i>=0;i--){
            total=total + new_n[i]*pow(10,i);
        }
        int same=0;
        if(total==nn){
            same=1;
        }
        int emirp=1;
        num = sqrt(total);
        for(int i=2;i<=num;i++){ //做到n的平方根 可以節省時間
            if(total%i==0){
                emirp=0;
                break;
            }
        }
        if(emirp==1&&same==0){
            cout<<nn<<" is emirp"<<endl;
        }
        else if(prime==1){
            cout<<nn<<" is prime"<<endl;
        }
        else{
            cout<<nn<<" is not prime"<<endl;
        }
    }
}