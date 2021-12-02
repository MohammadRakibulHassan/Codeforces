#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int> a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        for(auto it=a.end(); *it>d;it--){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(*it>a[i]+a[j]){
                        cout<<"NO"<<'\n';
                        break;
                    }
                }
            }
        }
        cout<<"YES"<<'\n';
    }
    return 0;
}
