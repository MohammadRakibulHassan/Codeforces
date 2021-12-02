#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i = 1 ; i <= n ; i++){
        cin>>ar[i];
    }
    for(int j = 1 ; j <= n ; j++){
        int l = j , ll = ar[l] , lll = ar[ll] , llll = ar[lll];
        if(l == llll){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0 ;
}
