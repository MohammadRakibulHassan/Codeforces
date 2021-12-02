#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> d(n);
        for(int i = 0 ; i < n ; i++) cin>>d[i];
        ///ll ans = d[0] , tot = 0;
        sort(d.begin() , d.end());
        ll ans = d[n-1] , tot = d[0];
        for(int i = 2 ; i < n ; ++i){
            ans += d[i] * 1LL * (n - i - (i - 1));
            tot += d[i-1];
        }
        cout<<'\t'<<ans<<'\n';
    }
    return 0;
}
