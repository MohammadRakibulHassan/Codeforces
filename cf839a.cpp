#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k , mx = 0 , cnt = 0 , l = 0 , ans = -1 , u = 1;
    cin>>n>>k;
    int v[n];
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        mx = mx + a;
        ///cout<<'\t'<<u++<<" . mx=mx+a :"<<mx;
        int temp = min(8 , mx);
        ///cout<<"\n temp=min(8,mx) :"<<temp;
        k -= temp;
        ///cout<<"\n k -=temp :"<<k;
        mx -= temp; ///mx = 0 won't work because the chocs left can be given next day
        ///cout<<"\n mx -= temp :"<<mx;
        ///cout<<"\n\n";
        if(k <= 0){
            cout<<i+1<<'\n';
            return 0;
        }
    }
    cout<<-1<<'\n';
    return 0;
}
