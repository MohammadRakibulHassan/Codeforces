#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, count = 0;
        cin>>n;
        string a, b;
        cin>>a>>b;
        for(int i = 0 ; i < n ;i ++){
            if(b[i] == '1'){
                if(a[i] == '0') count++;
                else if(i-1 >= 0 && a[i-1] == '1')count++;
                else if(i+1 < n && a[i+1] == '1'){
                    count++;
                    a[i+1] = 'p';
                }
            }
        }
        cout<<'\t'<<count<<'\n';
    }
    return 0;
}
