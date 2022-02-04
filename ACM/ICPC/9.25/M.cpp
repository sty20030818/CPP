#include <bits/stdc++.h>
using namespace std;
int sgn[61];
long long value(vector<int> a) {
	long long res = 0;
	for (int i = 0; i <= 60; ++i) {
		res += sgn[i] * a[i] * (1ll << i);
	}
	return res;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> sgn[i];
	}
	vector<int> va(n);
	for (int i = 0; i < n; ++i) {
		cin >> va[i];
	}
	vector<int> vb(n);
	for (int i = 0; i < n; ++i) {
		cin >> vb[i];
	}
	vector<int> vc(n);
	for (int i = 0; i < n; ++i) {
		vc[i] = (sgn[i] == 1);
	}
	bitset<64> mask = value(vc) - value(va) - value(vb);
	for (int i = 0; i < n; ++i) {
		if (mask[i]) vc[i] = !vc[i];
	}
	for (int i = 0; i < n; ++i) {
		if (i) cout << ' ';
		cout << vc[i];
	}
}
