#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 2e5 + 5;
 
int n, m;
int a[N], mn[N];
vector<int> g[N];
 
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	IOS;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		mn[i] = 2e9;
	}
	while (m--)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
	}
	int ans = -2e9;
	for (int i = 1; i <= n; i++)
	{
		for (auto &it : g[i])
		{
			int u = i, v = it;
			mn[v] = min(mn[v], min(a[u], mn[u]));
		}
		if (mn[i] != 2e9)
			ans = max(ans, a[i] - mn[i]);
	}
  //Ancestor approach
	cout << ans;
	return 0;
}