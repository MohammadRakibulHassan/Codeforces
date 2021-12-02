#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n, a, b;
    cin>>n>>a>>b;
    int up = 1;
    int mx = 40;
    bool mark = 0 ;
    while(up <= n && mx--){
        if(n % b == up % b) {
            mark = 1;
            break;
        }
        up = up * a;
    }
    if(mark) cout<<"Yes\n";
    else cout<<"No\n";
}
    return 0;
}
