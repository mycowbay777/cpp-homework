#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
    int t,h;
    int arr[500];
    cin>>t;
    for(int i=0;i<t;i++){
        int total=0;
        cin>>h;
        for(int j=0;j<h;j++){
            cin>>arr[j];
        }
        sort(arr,arr+h);
       int mid = h/2;
       for(int j=0;j<h;j++){
        total+=abs(arr[mid]-arr[j]);
       }
        cout<<total<<'\n';
    }
}