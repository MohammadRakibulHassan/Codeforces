#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector <int> n(x);
        int mx=0;
        for(auto &it : n){
            cin>>it;
            mx=max(mx, it);
        }
        int idx=-1;
        for(int i=0;i < x;i++){
            if(n[i] != mx) continue;
            if(i>0 && n[i-1] != mx) idx=i+1;
            if(i<0 && n[i+1] != mx) idx=i+1;
        }
        cout<<idx<<"\n";
    }
    return 0;
}
