#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int total=0;
        if(n==0){
            return 0;
        }
        if(n%2==1||n==2){
            cout<<"Impossible"<<endl;
        }
        else{
            total=n*3/2;
            cout<<total<<endl;
            for(int i=1;i<=n;i++){
                if(i!=n){
                    cout<<i<<" "<<i+1<<endl;
                }
                if(i<=n/2){
                    cout<<i<<" "<<i+n/2<<endl;
                }
                if (i == 1) {
					cout<<i<<" "<<n<<endl;
				}
            }
        }
    }
}