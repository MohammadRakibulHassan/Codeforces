#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int cnt = 0;
        bool mark[a+b+1] {};
        for(int i = 0 ; i < 2 ; i++){
            int tmp = (a+b+i) / 2;
            int mxb = min(tmp , b);
            for(int abr = 0 ; abr <= mxb ; abr++){
                int ah = tmp - abr;
                if(ah > 1) continue;
                int bbr = a - ah;
                int br = abr + bbr;
                if(br > a+b) continue;
                cnt += mark[br] == 0;
                mark[br] = 1;
            }
        }
        cout<<'\t'<<cnt<<'\n';
        for(int i = 0 ; i <= a+b ; i++){
            if(mark[i]) cout<<i<<' ';
        }
    }
    return 0;
}
