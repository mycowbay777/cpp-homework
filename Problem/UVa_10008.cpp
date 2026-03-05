#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

struct alpha { //資料結構 可以把資料綁在一起
	char name;
	int count;
};
bool cmp(alpha a, alpha b) {
	if (a.count != b.count) {
		return a.count > b.count;
	}
	return a.name < b.name;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();

	alpha data[26];
	for (int i = 0; i < 26; i++) {
		data[i].name = 'A' + i; //把字母初始化 data[0]是A data[1]是B 以此類推
		data[i].count = 0;
	}
	string line;
		while (t--) {
			getline(cin, line);
			for (char c : line) {
				if (isalpha(c)) {
					data[toupper(c) - 'A'].count++;
				}
			}
		}
		sort(data, data + 26, cmp);
		for (int i = 0; i < 26; i++) {
			if (data[i].count > 0) {
				cout << data[i].name << " " << data[i].count << endl;
			}
		}
	
}