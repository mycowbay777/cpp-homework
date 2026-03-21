#include<bits/stdc++.h>
using namespace std;
struct alpha{
    int count;
    int ascii;
};
int cmp(alpha a,alpha b){
    if(a.count!=b.count){
        return a.count<b.count;
    }
    return a.ascii>b.ascii;
}
int main(){
    string a;
    bool first=1;
    while(getline(cin,a)){
        if(!first){ //從第二個側資開始空行
            cout<<endl;
        }
        first=0;
        int counter[200]={0};
        for(int i=0;i<a.length();i++){
            counter[a[i]]++;
        }
        vector<alpha> vec;
        for(int i=32;i<128;i++){ //ascii從32開始到127 在鍵盤上「看得到」且「印得出來」的所有符號
            if(counter[i]>0){
                alpha input;
                input.count = counter[i];
                input.ascii = i;
                vec.push_back(input);
            }
        }
        sort(vec.begin(),vec.end(),cmp);
        for(int i=0;i<vec.size();i++){
            cout<<vec[i].ascii<<" "<<vec[i].count<<endl;
        }
    }
}