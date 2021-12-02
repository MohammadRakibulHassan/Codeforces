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
        vector<int> v;
        ll tot = 0;
        for(int i = 0 ;  i < n ; i++){
            cin>>v[i];
            tot = tot + v[i];
        }
        vector<int> x;
        x = v;
        sort(x.begin() , x.end());
        ll mx = x[n-1];
        tot = tot - mx;
        double ans = (tot*1.0)/(1.0*(n*1.0-1.0));
        ans = ans + (1.0*mx);
        cout<<fixed<<setprecision(7)<<ans<<'\n';
    }
    return 0;
}
