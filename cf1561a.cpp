#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1);
        for(int i = 1 ; i <= n ; i++) cin>>v[i];
        int sc = 0;
        while(!is_sorted(v.begin() , v.end())){
            for(int i = (sc % 2)+1 ; i+1 <= n ; i += 2){
                if(v[i] > v[i+1]) swap(v[i] , v[i+1]);
            }
            sc += 1;
        }
        cout<<'\t'<<sc<<'\n';
    }
    return 0;
}
