#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a , b;
    cin>>a>>b;
    ll res = 1;
    for(ll i = a+1 ; i <= b ; ++i){
        res = (res * (i % 10));
        res = (res % 10);
        if(res == 0)
            break;
    }
    cout<<res<<'\n';
    return 0;
}
