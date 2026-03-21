#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int mid1;
    long long int mid2;
    while(cin>>n){
        long long int arr[1000005];
        long long int count =0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(n%2==1){
            mid1 = arr[n/2];
            for(int i=0;i<n;i++){
                if(mid1==arr[i]){
                    count++;
                }
            }
            cout<<mid1<<" "<<count<<" 1"<<endl;
        }
        else{
            mid1 = arr[n/2-1];
            mid2 = arr[n/2];
            for(int i=0;i<n;i++){
                if(mid1==arr[i]||mid2==arr[i]){
                    count++;
                }
            }
            cout<<mid1<<" "<<count<<" "<<(mid2-mid1+1)<<endl;
        }
    }
}