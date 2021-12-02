#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,unq=0;
        cin>>n;
        vector<int> ar(n+1);

        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        vector<int> cnt(10001,1);
        sort(ar.begin(), ar.end());
        int an=n;

        for(int i=0;i<n;i++){
            if(ar[i+1]==ar[i]){
                cnt[ar[i]]++;
                if(cnt[ar[i]]>2){
                    an=an-1;
                }
            }
        }
        cout<<'\t'<<an<<'\n';
    }
    return 0;

}
