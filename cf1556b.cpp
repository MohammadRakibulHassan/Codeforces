#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sc = 0;
        vector<int> v(n);
        vector<int> ev;
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
            v[i] = v[i] % 2;    ///0101010100011
            if(v[i] == 0) ev.push_back(i);
        }
        long long ans = 1e18;
        for(int i = 0 ; i < 2 ; i++){
            int temp = (n - i + 1) / 2;
            if(temp != ev.size()) continue;
            long long cur = 0;
            for(int j = 0 ; j < temp ; j++){
                cur = cur + abs(ev[j] - (i + j * 2));
            }
            if(ans > cur) ans = cur;
        }
        if(ans == (long long)1e18) ans = -1;
        cout<<'\t'<<ans<<'\n';

    }
    return 0;
}
