#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int arr[1000005];
    while(cin>>n){
        long long int count =0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int mid1 = arr[(n-1)/2];
        long long int mid2 = arr[n/2];
       for(int i=0;i<n;i++){
            if(mid1==arr[i]||mid2==arr[i]){
                count++;
            }
        }
        cout<<mid1<<" "<<count<<" "<<(mid2-mid1+1)<<endl;
    }
}