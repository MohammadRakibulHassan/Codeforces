#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , a , b;
    cin>>n>>a>>b;
    int c = 0 , ans = 0;
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>>temp;
        if(temp == 1){
            if(a) a = a - 1;
            else if(b) b = b - 1 , c = c + 1;
            else if(c) c = c - 1;
            else ans++;
        }
        else{
            if(b) b = b - 1;
            else ans += 2;
        }
    }
    cout<<ans<<'\n';

    return 0;
}
