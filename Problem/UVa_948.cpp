#include<iostream>
using namespace std;

int main(){
    int n,a;
    int arr[40]={0,1};
    for(int i=2;i<40;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        int base[41]={};
        int check=0;
        cout<<a<<" = ";
        for(int j=39;j>=2;j--){
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
        cout<<" (fib)"<<endl;
    }
}