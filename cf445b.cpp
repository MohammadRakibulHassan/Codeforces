#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int p[51] , sz[51];
int Find(int x)
{
    if(p[x] == x) return x;
    else return p[x] = Find(p[x]);
}
bool Union(int a, int b)
{
    if((Find(a)) == (Find(b))) return 0;
    else{
        p[Find(a)] = p[Find(b)];
        return 1;
    }
}
int main()
{
    int n, m;
    ll length = 0;
    scanf("%d %d", &n, &m);
    for(int i = 1 ; i <= 51 ; i++){
        p[i] = i;
        sz[i] = 1;
    }
    for(int i = 1 ; i <= m ; i++){
        int u, v;
        scanf("%d %d", &u, &v);
        if(Union(u, v)){
            length++;
        }
    }
    ll ans = 1;
    for(int i = 1 ; i <= length ; i++) ans = ans * 2;
    printf("%lld\n", ans);
    return 0;
}
