#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int c, d;
        cin>>c>>d;
        int ans = 0;
        if(c == 0 && d == 0) ans = 0;
        else{
            if(c == d) ans = 1;
        else if((abs(c-d) % 2) == 1) ans = -1;
        else ans = 2;
        }
        cout<<'\t'<<ans<<'\n';
    }
    return 0;
}
