#include<bits/stdc++.h>
using namespace std;

int main(){
    long double a,b,c,d,e,f,g,h;
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h){
        long double x_v,y_v;
        x_v = -c+a;
        y_v = -d+b;
        long double new_x = g+x_v;
        long double new_y = h+y_v;
        cout<<fixed<<setprecision(3)<<new_x<<" ";
        cout<<fixed<<setprecision(3)<<new_y<<endl;
    }
}