#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=9, j=1;i>-1 && i<10 && j<=n;){
            cout<<i;
            if(i<10 && i>0)
                i--;
            else if(i==0)
                i++;
            j++;
        }
        cout<<endl;
    }
    return 0;
}
