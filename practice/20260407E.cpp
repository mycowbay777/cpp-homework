#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        deque<int> dq;
        for(int i=0;i<n;i++){
            if(!dq.empty()&&dq.front()<=i-k){
                dq.pop_front();
            }
            while(!dq.empty()&&arr[i]>=arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                cout<<arr[dq.front()];
                if(i==n-1){
                    cout<<"";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}