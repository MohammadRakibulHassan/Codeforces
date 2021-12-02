#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int> a(5),c(3);
        string an="";
        cin>>c[0]>>c[1]>>c[2];
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
        int pa=a[4]+a[0] , pl=a[1]+a[5];
        int cpa=c[0]+c[2]  , cpl=c[1]+c[2];

        if(c[2]>=a[2]){
            if(pa<=cpa && pl<=cpl){
                an="YES";
            }
            else an="NO";
        }
        else an="NO";
        cout<<an<<'\n';

    }
    return 0;
}
