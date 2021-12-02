#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n + 2];
        for (int i = 1; i <= n; i++) cin >> a[i];
        a[0] = 0;
        a[n + 1] = 1;
        int x = 0;
        while (a[x] != 0 || a[x + 1] != 1) {
            x++;
        }
        vector<int> res;
        for (int i = 1; i <= x; i++) res.push_back(i);
        res.push_back(n + 1);
        for (int i = x + 1; i <= n; i++)res.push_back(i);
        for (int i = 0; i <= n; i++) {
            cout << res[i] << " \n"[i == n];
        }
    }
    return 0;
}
/*
for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        if (a[0] == 1) {
            cout << n+1;
            for (int i=1; i<=n; i++) {
                cout << ' ' << i;
            }
            cout << '\n';
        } else {
            int j = find(begin(a), end(a), 1) - begin(a);
            if (j == n) {
                for (int i=1; i<=n+1; i++) {
                    cout << i << " \n"[i == n+1];
                }
            } else {
                for (int i=1; i<=j; i++) {
                    cout << i << ' ';
                }
                cout << n+1;
                for (int i=j+1; i<=n; i++) {
                    cout << ' ' << i;
                }
                cout << '\n';
            }
        }*/
        /*toposort
        vector<vector<int>> g;
        for(int i = 1 ; i < n ; i++){
            g[i][i+1] = 1;
        }
        for(int i = 1 ; i <= n ; i++){
            cin>>v[i];
            if(v[i] == 0){
                g[i][n+1] = 1;
            }
            else{
                g[n+1][i] = 1;
            }
        }
        */
