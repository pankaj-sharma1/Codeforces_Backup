/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	string s; cin >> s;
	string x = "RGB";
	ll ans = 0;
	for (ll i = 1; i < n - 1; i++) {
		if (s[i] == s[i - 1]) {
			for (ll j = 0; j < 3; j++) {
				if (s[i - 1] != x[j] and s[i + 1] != x[j]) {s[i] = x[j]; break;}
			}
			ans++;
		}
	}
	if (s[n - 1] == s[n - 2]) {
		for (ll j = 0; j < 3; j++) {
			if (s[n - 2] != x[j]) {s[n - 1] = x[j]; break;}
		}
		ans++;
	}
	cout << ans << endl << s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	//cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}