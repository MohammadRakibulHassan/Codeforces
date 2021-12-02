#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+3];
    int spec = 3;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        if(a[i] == spec){
            cout<<"NO\n";
            return 0;
        }
        spec = 6 - a[i] - spec;
    }
    cout<<"YES"<<'\n';
    return 0;
}
