#include "bits/stdc++.h" /*bruteforce*/
using namespace std;
const int maxn = 2e5 + 10;
set <int> g[maxn];
set <int> cont;
void check(int u) {
	if(g[u].empty() or *g[u].rbegin() < u) {
		cont.insert(u);
	} else {
		cont.erase(u);
	}
}
void join(int u, int v) {
	g[u].insert(v);
	g[v].insert(u);
	check(u);
	check(v);
}
void del(int u, int v) {
	g[u].erase(v);
	g[v].erase(u);
	check(u);
	check(v);
}
int main(int argc, char const *argv[])
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++) {
		cont.insert(i);
	}
	for(int i = 1; i <= m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		join(u, v);
	}
	int q;
	scanf("%d", &q);
	while(q--) {
		int c, u, v;
		scanf("%d", &c);
		if(c == 1) {
			scanf("%d %d", &u, &v);
			join(u, v);
		} else if (c == 2) {
			scanf("%d %d", &u, &v);
			del(u, v);
		} else {
			printf("%d\n", (int) cont.size());
		}
	}
	return 0;
}
