#include<bits/stdc++.h>
using namespace std;

struct Position {
    int pile_idx; // 在哪一個 vector 裡
    int height;   // 在該 vector 的第幾個索引
};
struct BlocksWorld { 
    int n;
    vector<int> piles[25]; // 儲存每個位置的方塊
    Position pos[25];      // 快速查找方塊編號 i 的位置

    // 初始化：每個方塊都在自己的位置上
    BlocksWorld(int num) : n(num) {
        for (int i = 0; i < n; i++) {
            piles[i].push_back(i);
            pos[i] = {i, 0};
        }
    }

    // 將 a 上方的方塊全部歸位
    void clear_above(int a) {
        int p = pos[a].pile_idx;
        int h = pos[a].height;
        
        while (piles[p].size() > h + 1) {
            int top = piles[p].back();
            piles[p].pop_back();
            // 歸位到原本編號的位置
            piles[top].push_back(top);
            pos[top] = {top, 0};
        }
    }

    // 將 a 及其上方的所有方塊搬到 b 所在的堆疊上面
    void move_onto(int a, int b) {
        int from_p = pos[a].pile_idx;
        int to_p = pos[b].pile_idx;
        int from_h = pos[a].height;

        // 暫存要搬動的部分（從 a 開始往上的所有方塊）
        vector<int> temp;
        for (int i = from_h; i < piles[from_p].size(); i++) {
            temp.push_back(piles[from_p][i]);
        }
        
        // 從原堆疊移除
        piles[from_p].erase(piles[from_p].begin() + from_h, piles[from_p].end());

        // 放到目標堆疊並更新位置資訊
        for (int val : temp) {
            piles[to_p].push_back(val);
            pos[val] = {to_p, (int)piles[to_p].size() - 1};
        }
    }

    // 檢查是否為非法指令
    bool is_invalid(int a, int b) {
        return a == b || pos[a].pile_idx == pos[b].pile_idx;
    }
};

int main() {
    int n;
    cin >> n;
    BlocksWorld bw(n);

    string s1, s2;
    int a, b;
    while (cin >> s1 && s1 != "quit") {
        cin >> a >> s2 >> b;
        
        if (bw.is_invalid(a, b)) continue;

        if (s1 == "move") {
            bw.clear_above(a); // move 一定要清空 a
            if (s2 == "onto") bw.clear_above(b); // onto 要清空 b
            bw.move_onto(a, b);
        } 
        else if (s1 == "pile") {
            // pile 不需要清空 a
            if (s2 == "onto") bw.clear_above(b); // onto 要清空 b
            bw.move_onto(a, b);
        }
    }
    return 0;
}