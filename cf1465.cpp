#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool is_fair(ll x)
{
    ll r=x;
    while(x){
        if(x%10 && r%(x%10))
            return false;
        x=x/10;
    }
    return true;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        while(!is_fair(n))
            n++;
        cout<<n<<'\n';
    }
    return 0;
}
