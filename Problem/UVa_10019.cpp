#include<iostream>
using namespace std;

int main(){
    int t;
    int arr[14]={1}; //2^14=16384可以覆蓋9999
    cin>>t;
    for(int k=1;k<14;k++){
        arr[k]= arr[k-1]*2;
    }
    for(int i=0;i<t;i++){
        int n;
        int num;
        int count1=0;
        int count2=0;
        cin>>n;
        int temp = n;
        for(int k=13;k>=0;k--){
            if(n-arr[k]>=0){
                n = n-arr[k];
                count1++;
            }
        }
        while(temp!=0) {
            num = temp%10;
            temp=temp/10;
            for(int k=13;k>=0;k--){
                if(num-arr[k]>=0){
                    num = num-arr[k];
                    count2++;
                }
            }
        }
        cout<<count1<<" "<<count2<<endl;
    }
}