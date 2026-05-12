#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
struct gg{
	int x;
	int y;
	int count;
};
int dx[8] = { -2,-2,-1,-1,1,1,2,2 };
int dy[8] = { -1,1,-2,2,-2,2,-1,1 };
int solve() {
	string a, b;
	while (cin >> a >> b) {
		int start_x = a[0] - 'a';
		int start_y = a[1] - '1';
		int end_x = b[0] - 'a';
		int end_y = b[1] - '1';
		if (start_x == end_x && start_y == end_y) {
			cout << "To get from " << a << " to " << b << " takes 0 knight moves.";
		}
		queue<gg> q;
		q.push({ start_x,start_y,0 });//初始化

		bool visited[8][8];
		memset(visited,false,sizeof(visited));//初始化
		visited[start_x][start_y] = true;

		while (!q.empty()) {
			gg cur = q.front();
			q.pop();
			if (cur.x == end_x && cur.y == end_y) {
				cout << "To get from " << a << " to " << b << " takes " << cur.count << " knight moves."<<endl;
			}
			for (int i = 0; i < 8; i++) {
				int nx = cur.x + dx[i];
				int ny = cur.y + dy[i];
				if (nx >= 0 && nx < 8 && ny >= 0 && nx <= 8 && !visited[nx][ny]) {
					visited[nx][ny] = true;
					q.push({ nx,ny,cur.count + 1 });
				}
			}
		}
	}
}
int main() {
	solve();
	return 0;
}