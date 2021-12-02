#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        n = (n-1) / 2;
        cout<< 8 * n * (n+1) * (2*n+1) /6<<'\n';
    }
    return 0;
}
