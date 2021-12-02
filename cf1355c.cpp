#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///ll ans;
int main()
{
    int t;
    cin>>t;
    while(t--){
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    ll str = max(a+b , c), nd = b+c, ans = 0;
    for(ll i = str ; i <= nd ; i++){
        ll n;
        n = min({b-a+1,
                c-b+1,
                i-a-b+1,
                b+c-i+1
            });
        ll p;
        p = min(i-c , d-c+1);
        ans = ans + (n*p);
    }
    cout<<ans<<'\n';
    }
    return 0;
}
