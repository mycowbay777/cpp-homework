#include<iostream>
using namespace std;

int main(){
    long long int s,d;
    while(cin>>s>>d){
        long long int total=s;
        long long int temp =s;
        while(total<d){
            temp++;
            total = total+temp;
        }
        cout<<temp<<endl;
        
    }
}