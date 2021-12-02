#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin>>n>>m;
    int ar[26][26];
    int minx = INT_MAX , maxx = INT_MIN , miny = INT_MAX , maxy = INT_MIN;
    for(int i = 1 ; i <= n ; i++){
        for(int j = i ; j <= m ; j++){
            cin>>ar[i][j];
            if(ar[i][j] == 1){
                minx = min(minx , i);
                miny = min(miny , j);
                maxx = max(maxx , i);
                maxy = max(maxy , j);

            }
        }
    }
    int x = max(m - maxx , n - maxx);
    int y = max(n - maxy , miny - 1);
    cout<<2 * (x+y)<<'\n';
    return 0;
}
