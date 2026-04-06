#include<bits/stdc++.h>
using namespace std;

int main(){
    int team,count=1;
    int member_sum;
    string move;
    while(cin>>team&&team!=0){
        cout<<"Scenario #"<<count<<endl;
        count++;
        map<int,int> team_of;
        for(int i=0;i<team;i++){
            int member;
            cin>>member_sum;
            while(member_sum--){
                cin>>member;
                team_of[member] = i;//把member歸類
            }
        }
        queue<int> master_q;//大隊伍 queue是用先來先排的順序去排列
        queue<int> q[1005]; //小隊伍
        while(cin>>move&&move!="STOP"){
            if(move=="ENQUEUE"){
                int input;
                cin>>input;
                int team_num = team_of[input];
                if(q[team_num].empty()){ //如果這個小隊伍沒出現過 就要排在大隊伍的最後面
                    master_q.push(team_num);
                }
                q[team_num].push(input);//排在自己隊伍的最後面
            }
            else if(move=="DEQUEUE"){
                int team_num = master_q.front(); //找出現在哪一隊排在最前面
                cout<<q[team_num].front()<<endl;
                q[team_num].pop();
                if(q[team_num].empty()){ //如果原本排在最前面的小隊伍已經空了 就要換下一隊
                    master_q.pop();
                }
            }
        }
        cout<<endl;
    }
}