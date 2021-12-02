#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2,ans="";
        cin>>s1>>s2;
        int ar[n+1],sum=0,ar2[n+1],sum2=0;
        for(int i=0;i<n;i++){
            ar[i]=s1[i]-'0';
            ar2[i]=s2[i]-'0';
            sum=sum+ar[i];
            sum2=sum2+ar2[i];
        }
        if(sum>sum2){
            ans="RED";
        }
        else if(sum<sum2){
            ans="BLUE";
        }
        else{
            ans="EQUAL";
        }
        cout<<ans<<'\n';
    }
    return 0;
}
