#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n+1);
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
        }
        int x = 0;
        int temp = v[x++];
        while(x < n){
            temp = temp & v[x++];
        }
        cout<<'\t'<<temp<<'\n';
    }
    return 0;
}
