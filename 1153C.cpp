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
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	string s; cin >> s;
	if (s[0] == ')' or s[n - 1] == '(')cout << ":(";
	else if (n % 2)cout << ":(";
	else {
		ll a = 0, b = 0;
		for (char ch : s) {
			if (ch == '(')a++;
			else if (ch == ')')b++;
		}
		if (a > n / 2 or b > n / 2)cout << ":(";
		else {
			a = abs(a - n / 2);
			for (ll i = 0; i < n; i++) {
				if (s[i] == '?' and a) a--, s[i] = '(';
				else if (s[i] == '?')s[i] = ')';
			}
			ll c = 0;
			for (ll i = 0; i < n; i++) {
				if (s[i] == '(')c++;
				else c--;
				if (c <= 0 and i != n - 1) {cout << ":("; return;}
			}
			if (c == 0) cout << s;
			else cout << ":(";
		}
	}
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