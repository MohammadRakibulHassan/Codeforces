#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long ans = 0;
        if(b >= a){
            ans = b;
        }
        else if(c <= d){
            ans = -1;
        }
        else{
            a -= b;
            ll temp = (a + c - d - 1) / (c - d);
            ans = b + (temp * c);
        }
        cout << ans << "\n";
    }
    return 0;
}
