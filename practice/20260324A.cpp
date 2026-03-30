#include<bits/stdc++.h>
using namespace std;
//計算總數減掉不用動的最小值
int main(){
    long long b[3][3];
    while(cin>>b[0][0]>> b[0][1] >> b[0][2] >> b[1][0] >> b[1][1] >> b[1][2] >> b[2][0] >> b[2][1] >> b[2][2]){
        long long total=0;
        for(int i=0;i<3;i++){
            for(int j=0; j<3; j++){
                total += b[i][j];
            }
        }
        string com[]={"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
        int possible[6][3]={
            {0,2,1},{0,1,2},{2,0,1},{2,1,0},{1,0,2},{1,2,0}
        };

        long long min_move = LLONG_MAX; //把minmove先開到最大
        string best_str ="";
        for (int i = 0; i < 6; i++) {
            // 計算當前組合「不用動」的瓶子數量
            long long keep = b[0][possible[i][0]] + b[1][possible[i][1]] + b[2][possible[i][2]];
            long long move = total - keep;

            if (move < min_move) {
                min_move = move;
                best_str = com[i];
            }
        }
        cout<<best_str<<" "<<min_move<<endl;
    }
}