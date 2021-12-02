#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int l = abs(a-b);
        int hst = l*3;
        int n = l*2;
        int d = -1;
        if(l+c <= n && l+c >= 1)
            d = c+l;
        else
            d = abs(c-l);
        if
            (d > n || a > n || b > n || c > n) d = -1;
        cout<<'\t'<<d<<'\n';
    }
    return 0;
}
