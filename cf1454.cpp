#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int a[n],cnt[n+1]={0},ndx[n+1]{0};
        for(int i=0;i<n;++i){
            cin>>a[i];
            cnt[a[i]]+=1;
            ndx[a[i]]=i+1;
        }
        int ans=-1;
        for(int i=1;i<=n;i++){
            if(cnt[i]==1){
                ans=ndx[i];
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
