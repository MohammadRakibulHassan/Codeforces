#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n , k;
    cin>>n>>k;
    if(n == 0){
        cout<<1<<" "<<0<<'\n';
        return 0;
    }
    ll low = 9223372036854775807 , ndx = -1, num = -1;
    for(ll i = 0 ; i < k ; i++){
        ll temp;
        cin>>temp;
        if(n%temp < low){
            ndx = i+1;
            num = (n / temp);
            low = n % temp;
        }
    }
    cout<<ndx<<" "<<num<<'\n';
    return 0;
}
