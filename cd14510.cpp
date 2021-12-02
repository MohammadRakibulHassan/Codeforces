#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s,ans="";
        cin>>s;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            ans="NO";
            for(int i=0,j=r+1;i<l && j<n;i++,j++){
                if(s[i]==s[l])
                    ans="YES";
                if(s[j]==s[r])
                    ans="YES";
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}
