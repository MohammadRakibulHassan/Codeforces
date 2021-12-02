#include<bits/stdc++.h>
using namespace std;
int main()
{
    double m,n,a;
    cin>>n>>m>>a;
    long long ans=(long long)(ceil(m/a)) * (long long)(ceil(n/a));
    cout<<ans<<'\n';
    return 0;
}
