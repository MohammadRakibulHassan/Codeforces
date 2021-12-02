#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,ans;
    cin>>t;
    while(t--){
        long long x1,y1;
        cin>>x1>>y1;
        long long x2,y2;
        cin>>x2>>y2;
        if((x1 == x2 || y1 == y2)){
            ans=abs(x1-x2) + abs(y1-y2);
        }
        else
            ans=abs(x1-x2) + abs(y1-y2) + 2;
        cout<<ans<<"\n";
    }
    return 0;

}
