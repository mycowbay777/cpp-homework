#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int num;
    int t=0;
    while(cin>>num){
        t++;
        cout<<setw(4)<<t<<".";
        if(num==0){
            cout<<" 0"<<endl;
            continue;
        }

        if(num>=10000000){
            long long kuti_num = num/10000000;
            num%=10000000;
            if(kuti_num>=10000000){
                cout<< " " << kuti_num / 10000000 << " kuti";
                kuti_num%=10000000;
            }
            if(kuti_num>=100000){
                cout << " " << kuti_num / 100000 << " lakh";
                kuti_num%=100000;
            }
            if(kuti_num>=1000){
                cout << " " << kuti_num / 1000 << " hajar";
                kuti_num%=1000;
            }
            if(kuti_num>=100){
                cout << " " << kuti_num / 100 << " shata";
                kuti_num%=100;
            }
            if (kuti_num > 0) {
                cout << " " << kuti_num;
            }
            cout<<" kuti";
        }
        if(num>=100000){
            cout<<" "<<num/100000<<" lakh";
            num%=100000;
        }
        if(num>=1000){
            cout<<" "<<num/1000<<" hajar";
            num%=1000;
        }
        if(num>=100){
            cout<<" "<<num/100<<" shata";
            num%=100;
        }
        if (num > 0) {
            cout << " " << num;
        }
        cout<<endl;
    }
}