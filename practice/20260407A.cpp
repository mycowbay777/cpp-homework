#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[1005];
    while(cin>>n){
        if(n==0){
            return 0;
        }
        while(1){
            cin>>arr[0];
            if(arr[0]==0){
                break;
            }
            for(int i=1;i<n;i++){
                cin>>arr[i];
            }
        }
    }
}