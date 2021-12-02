#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m , cnt = 0;
    cin>>n>>m;
    char brd[109][109];
    int minx = 0x3f3f3f3f , miny = 0x3f3f3f3f , maxx = 0 , maxy = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin>>brd[i][j];
            if(brd[i][j] == 'B'){
                ++cnt;
                minx = min(i , minx);
                miny = min(j , miny);
                maxx = max(i , maxx);
                maxy = max(j , maxy);
            }
            else
                ;
        }
    }
    if(!cnt){
        cout<<1<<'\n';
        return 0;
    }
    else{
        int temp = max(maxx-minx , maxy-miny) + 1;
        if(temp > m || temp > n){
            cout<<-1<<'\n';
            return 0;
        }
        int ans = (temp * temp) - cnt;
        cout<<ans<<'\n';
    }
    return 0;
}
