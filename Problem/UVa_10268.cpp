#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main(){
    int x;
    while(cin>>x){
        string line;
        getline(cin,line);
        getline(cin,line);
        stringstream ss(line);
        long long num;
        vector<long long> a;
        while(ss>>num){
            a.push_back(num);
        }
        int n = a.size() - 1;
        long long ans = 0;

        // 3. 依照降冪邏輯計算微分值
        // 原式：a[0]*x^n + a[1]*x^(n-1) + ... + a[n]
        // 微分：a[0]*n*x^(n-1) + a[1]*(n-1)*x^(n-2) + ... + a[n-1]
        for (int i = 0; i < n; i++) {
            long long power = n - i; // 這是該項原本的次方
            long long derived_coeff = a[i] * power; // 微分後的係數 (a_i * 指數)
            
            // 使用秦九韶算法累加
            // ans 每次乘 x 是為了把之前的項往更高次方推
            if (i == 0) {
                ans = derived_coeff;
            } else {
                ans = ans * x + derived_coeff;
            }
        }

        // 如果只有一個係數（常數），微分後 ans 保持 0
        cout << ans << endl;
    }
    return 0;
}