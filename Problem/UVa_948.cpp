#include<iostream>
using namespace std;

int main(){
    int a;
    int arr[40]={0,1};
    for(int i=2;i<40;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    cin>>a;
    for(int i=1;i<=a;i++){
        int base[41]={};
        cout<<a<<" = ";
        for(int j=39;j>=2;j--){
            int check=0;
            if(a-arr[j]>=0){
                check = 1;
                if(base[j+1]!=1){
                    base[j] = 1;
                    a=a-arr[j];
                }
            }
            if(check==1){
                cout<<base[j];
            }
        }
        cout<<" (fib)";
    }
}