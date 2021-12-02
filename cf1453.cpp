#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,cnt=0;
        cin>>n>>m;
        int ar[n],arr[m];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ar[i]==arr[j]){
                    cnt+=1;
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
