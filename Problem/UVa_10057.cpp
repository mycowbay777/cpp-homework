#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int mid;
    while(cin>>n){
        int arr[1000000];
        int count =0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n%2==1){
            mid = arr[n/2];
            for(int i=0;i<n;i++){
                if(mid==arr[i]){
                    count++;
                }
            }
            cout<<mid<<" "<<count<<" 1";
        }
        else{
            mid = arr[n/2-1];
            for(int i=0;i<n;i++){
                if(mid==arr[i]){
                    count++;
                }
            }
            if(mid==arr[n/2]){
                cout<<mid<<" "<<count<<" 1"<<endl;
            }
            else{
                cout<<mid<<" 2"<<" "<<arr[n/2]-mid+1<<endl;
            }
        }
    }
}