#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++) cin >> v[i];
        if(v[0]+v[1] <= v[n-1]){
            cout << '\t' << 1 << ' ' << 2 << ' ' << n << '\n';
        }
        else
            cout << '\t' << -1 << '\n';
    }
    return 0;
}
