#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    int arr[50];
    cin>>t;
    for(int i=0;i<t;i++){
        int longg;
        int count =0;
        cin>>longg;
       for(int k=0;k<longg;k++){
        cin>>arr[k];
       }
       for(int k=0;k<longg-1;k++){
        for(int i=0;i<longg-1-k;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                count++;
            }
        }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps"<<endl;
    }
}