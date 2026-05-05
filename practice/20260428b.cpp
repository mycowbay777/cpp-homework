#include<bits/stdc++.h>
using namespace std;

struct Item {
    double v, w;
    double ratio;
};

// 排序比較函式：由高到低排
bool cmp(Item a, Item b) {
    return a.ratio > b.ratio;
}

int main() {
    int N;
    double W;
    if (!(cin >> N >> W)) return 0;
    vector<Item> items(N);
    for (int i = 0; i < N; i++) {
        cin >> items[i].v >> items[i].w;
        items[i].ratio = items[i].v / items[i].w;
    }
    sort(items.begin(), items.end(), cmp);
    double totalValue = 0.0;
    for (int i = 0; i < N; i++) {
        if (W <= 0) break; 

        if (items[i].w <= W) {
            totalValue += items[i].v;
            W -= items[i].w;
        } else {
            totalValue += items[i].v * (W / items[i].w);
            W = 0; 
        }
    }

    // 輸出格式：控制小數點位數
    cout << fixed << setprecision(8) << totalValue << endl;

    return 0;
}