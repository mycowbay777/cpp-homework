#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define pi asin(1.0)*2

int main(){
    double s,a,r;
    string unit;
    double arc,chord;
    r=6440.0;
    while(cin>>s>>a>>unit){
        if(unit=="min"){
            a/=60;
        }
        if(a>180.0){
            a=360.0-a;
        }
        arc=2.0*pi*(r+s)*a/360;
        chord=2.0*(r+s)*sin(a/2*pi/180); //要換算成弧長
        cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<"\n";
    }
}