#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int i,j;
    while(cin>>i>>j){
        int newmax=0;
        int start = i;
        int end = j;
        if(i>j){
            swap(i,j);
        }
        for(int k=i;k<=j;k++){
            int n=k;
            int count=1;
            while(n!=1){
                if(n%2==1){
                    n=n*3+1;
                    count++;
                }
                else{
                    n =n/2;
                    count++;
                }
            }
            if(count>newmax){
                newmax=count;
            }
        }
        cout<<start<<" "<<end<<" "<<newmax<<endl;
    }
}