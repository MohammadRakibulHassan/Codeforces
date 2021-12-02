/*#include<bits/stdc++.h>
using namespace std;
#define mx (int)1e5+7
#define pb push_back
vector< int >adj[mx];
int a[mx];
int m,ans=0;
void dfs(int v,int par,int k){
    if(k>m) return;
    int yes=1;
    for(auto &z : adj[v]){
        if(z!=par){
            yes=0;
            dfs(z,v,(k+1)*a[z]);
        }
    }
    ans+=yes;

}
int main(){
    int n,u,v;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        u--;
        v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(0,-1,a[0]);
    cout<<ans;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int mx = 1e5+2;
int col[mx] , temp[mx];
bool vis[mx];
int num;
int n , m , s , ans = 0;
vector<int> adj[mx];
void ddd(int v , int par , int k)
{
    if(k > m) return;
    int y = 1;
    for(auto& x : adj[v]){
        if(x != par){
            y = 0;
            ddd(x , v , (k+1)*col[x]);
        }
    }
    ans += y;
}
int main ()
{
    cin>>n>>m;
    for(int i = 0 ; i < n ; i++){
        cin>>col[i];
    }
    for(int i = 0 ; i < n-1 ; i++){
        int u , v;
        cin>>u>>v;
        u-- ; v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ddd(0 , -1 , col[0]);
    cout<<ans<<'\n';
    return 0;
}
