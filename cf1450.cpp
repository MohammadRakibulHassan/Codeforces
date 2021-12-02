#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector <int> x(n),y(n);
        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }
        bool ok;
        int ans=-1;
        for(int i=0;i<n;i++){
            ok=true;
            for(int j=0;j<n;j++){
                int d=abs(x[i]-x[j]) + abs(y[i]-y[j]);
                if(d>k){
                    ok=false;
                    break;
                }
            }
            if(ok)
                ans=1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
