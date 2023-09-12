#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;
stack<pii> st;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	auto idx = int{ 1 };
	while (0 < (n--)) {
		int x;
		cin >> x;

		if (st.empty()) {
			cout << 0 << ' ';
		}
		else {
			auto isFound = bool{ false };
			while (!st.empty()) {
				auto [j, y] = st.top();

				if (x <= y) {
					cout << j << ' ';
					isFound = true;
					break;
				}
				else {
					st.pop();
				}
			}

			if (!isFound) {
				cout << 0 << ' ';
			}
		}

		st.push({ idx, x });
		++idx;
	}

	return 0;
}