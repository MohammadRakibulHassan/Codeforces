#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v,res;
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=v.size();i>=0;i--){
            for(int j=1;j<=v[i];j++)
                res.push_back(1);
        }
        for(int i=0;i<n;i++)
            cout<<res[i]<<" ";
        cout<<'\n';
    }
    return 0;
}
