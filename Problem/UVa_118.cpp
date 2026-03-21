#include<bits/stdc++.h>
using namespace std;
//if和else if用法要注意
bool scent[55][55]={}; //去紀錄前面的機器人掉下去前的位置

int main(){
    int max_x;
    int max_y;
    cin>>max_x>>max_y;
    int x,y;
    char position;
    while(cin>>x>>y>>position){
        int lost=0;
        char new_position = position;
        string movee;
        cin>>movee;
        for(int i=0;i<movee.length();i++){
            if(movee[i]=='F'){
                int next_x = x;
                int next_y = y;
                if(new_position=='E'){
                    next_x++;
                }
                else if(new_position=='W'){
                    next_x--;
                }
                else if(new_position=='N'){
                    next_y++;
                }
                else if(new_position=='S'){
                    next_y--;
                }
                if(next_x>max_x||next_y>max_y||next_x<0||next_y<0){
                    if(scent[x][y]==0){
                        scent[x][y]=1;
                        lost=1;
                        break;
                    }
                }
                else{  //如果沒出界就更新新的位置 這樣輸出才會是對的 如果出界就用前一個位置
                    x=next_x;
                    y=next_y;
                }
            }
            else if(movee[i]=='R'){
                if(new_position=='N'){
                    new_position = 'E';
                }
                else if(new_position=='E'){
                    new_position = 'S';
                }
                else if(new_position=='S'){
                    new_position = 'W';
                }
                else if(new_position=='W'){
                    new_position = 'N';
                }
            }
            else if(movee[i]=='L'){
                if(new_position=='N'){
                    new_position = 'W';
                }
                else if(new_position=='W'){
                    new_position = 'S';
                }
                else if(new_position=='S'){
                    new_position = 'E';
                }
                else if(new_position=='E'){
                    new_position = 'N';
                }
            }
        }
        cout<<x<<" "<<y<<" "<<new_position;
        if(lost){
            cout<<" LOST";
        }
        cout<<endl;
    }
}