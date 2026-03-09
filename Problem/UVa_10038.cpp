#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int arr[3000];
    while(cin>>n){
        int total=0;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            sum = sum+i;
        }
        for(int i=1;i<n;i++){
            total = total + abs(arr[i]-arr[i-1]);
        }
        if(sum==total){
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }
    }
}