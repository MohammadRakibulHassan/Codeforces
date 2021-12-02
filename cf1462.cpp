#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,x="2020",ans="";
        cin>>s;
        if(n<4){
            cout<<"NO"<<'\n';
        }
        if(s.find(x)){
            //ans="YES";
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}
