#include<bits/stdc++.h>
using namespace std;
#define MOD 1e8
int solve(int n , int f , int h)
{
    if(n == 0) return 1;
    int x = 0;
    if(f > 0)
        x = solve(n-1 , f-1 , h);
    int y = 0;
    if(h > 0)
        y = solve(n-1 , f , h-1);
    return x+y;
}
int main()
{
    int t; cin >> t; while(t--){
    int n1 , n2 , k1 , k2;
    cin >> n1 >> n2>> k1 >> k2;
    cout << '\t' << solve(n1+n2 , n1 , n2) << '\n';
    }
    return 0;
}
