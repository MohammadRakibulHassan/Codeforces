#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
	cin >> n;
	vector<int> pref(n+1);
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		pref[i+1] = pref[i] + c-'0';
	}

	map<int, int> m;
	int res = 0;
	for (int i = 0; i <= n; i++) {
		int x = pref[i]-i;
		res += m[x];
		m[x]++;
	}
	cout << res << endl;
    }
    return 0;
}
