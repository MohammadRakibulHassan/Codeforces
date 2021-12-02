#include<bits/stdc++.h>
using namespace std;
int cnt[1001];
int main()
{
    int n , m;
    cin>>n>>m;
    int point = 30642;
    for(int i = 0 ; i < m ; i++){
        int temp;
        cin>>temp;
        if(temp <= n)
            cnt[temp]++;
    }
    for(int i = 1 ; i <= n ; i++){
        point = min(point , cnt[i]);
    }
    cout<<point<<'\n';
    return 0;
}
