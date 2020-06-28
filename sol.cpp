#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 

void decode() {
	int n;
	cin >> n;
	int a[n+10];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		if(a[i] % 2 == 0) {
			a[i]--;
		}
	}
	for(int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
