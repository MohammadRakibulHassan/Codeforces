#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,cnt=0;
        cin>>n>>x;
        vector <int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(is_sorted(v.begin(),v.end())){
            cout<<0<<'\n';
        }
        else{
            for(cnt=0;cnt<=n;cnt++){
                if(is_sorted(v.begin(),v.end()))
                    break;
                for(int i=0;i<n;i++){
                    if(v[i] > x){
                        swap(v[i],x);
                        break;
                    }
                }
            }
            if(is_sorted(v.begin(),v.end())){
                cout<<cnt<<'\n';
            }
            else{
                cout<<-1<<'\n';
            }
        }
    }
    return 0;
}
