#include <iostream>

using namespace std;

void solve(int n, int k) {
	if (1 == k) {
		cout << "YES\n";
		for (int i = 1; i <= n; ++i) {
			cout << i << '\n';
		}
		return;
	}

	if (1 == n % 2) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";
	auto now1 = int{ 1 };
	auto now2 = int{ 2 };
	const auto& loop = n / 2;
	for (int l = 0; l < loop; ++l) {
		for (int i = 0; i < k; ++i) {
			cout << now1 << ' ';
			now1 += 2;
		}
		cout << '\n';

		for (int i = 0; i < k; ++i) {
			cout << now2 << ' ';
			now2 += 2;
		}
		cout << '\n';
	}
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n, k;
		cin >> n >> k;
		solve(n, k);
	}

	return 0;
}