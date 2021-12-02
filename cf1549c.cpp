#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ans, noble[200001];
int tempa , tempb;
void add(int x , int y)
{
    if(x > y){
        noble[y]++;
        if(noble[y] == 1) ans++;
    }
    else{
        noble[x]++;
        if(noble[x] == 1) ans++;
    }
}
void rmv(int x , int y)
{
    if(x > y){
        noble[y]--;
        if(noble[y] == 0) ans--;
    }
    else{
        noble[x]--;
        if(noble[x] == 0) ans--;
    }
}
int main()
{
    int n, m;
    cin>>n>>m;
    while(m--){
        int u, v;
        cin>>u>>v;
        if(u > v){
            noble[v]++;
        }
        else{
            noble[u]++;
        }
    }
    for(int i = 1 ; i <= n ; i++){
        if(noble[i] > 0) ans++;
    }
    int q;
    cin>>q;
    while(q--){
        int m, u, v;
        cin>>m>>u>>v;
        if(m == 1){
            add(u , v);
        }
        else if(m == 2){
            rmv(u , v);
        }
        else{
            ans = n - ans;
            cout<<'\t'<<ans<<'\n';
        }
    }
    return 0;
}
