#include<bits/stdc++.h>
using namespace std;
int dx[4] = {+1 , 0 , 0 , -1};
int dy[4] = {0 , -1 , +1 , 0};
int d[1002][1002] , x , y , X , Y;
queue<pair<int , int>> q;
int n , m , k;
bool f , c = 1;  string s[1001] , ans;
bool freCell(int x , int y)
{
    return (x >= 0 && x < n &&
             y >= 0 && y < n &&
             s[x][y] != '*' && d[x][y] == INT_MAX);
}
bool gesilo(int x , int y)
{
    return (x >= 0 && x < n &&
             y >= 0 && y < n &&
             s[x][y] != '*' && d[x][y] <= k);
}
int main()
{
    scanf("%d %d %d", &n , &m , &k);
    for(int i = 0 ; i < n ; i++){
        cin>>s[i];
        for(int j = 0 ; j < m ; j++){
            d[i][j] = INT_MAX;
            if(s[i][j] == 'X') x = i , y = j;
        }
    }
    if(k%2 == 0) cout<<"IMPOSSIBLE\n";
    q.push({x , y});
    d[x][y] = 0;
    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        for(int i = 0 ; i < 4 ; i++){
            X = a + dx[i];
            Y = b + dy[i];
            if(freCell(X , Y)){
                d[x][y] = d[a][b] + 1;
                q.push({X , Y});
            }
        }
    }
    while(k--){
        f = 0;
        for(int i = 0 ; i < 4 ; i++){
            X = x + dx[i];
            Y = y + dy[i];
            if(gesilo(X,y)){
                X = x;
                Y = y;
                f = 1;
                ans = ans + s[i];
                break;
            }
        }
        if(!f){
            c = 0;
            break;
        }
    }
    if(!c) cout<<"IMPOSSIBLE\n";
    else cout<<ans<<'\n';
    return 0;
}
