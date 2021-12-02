#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        vector <int> v;
        while(n--){
            int p;
            cin>>p;
            sum=sum+p;
            v.push_back(p);
        }
        if(sum==0){
            cout<<"NO"<<"\n";
            EXIT_SUCCESS;
        }
        else{
            reverse(v.begin() , v.end());
            cout<<"YES\n";
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<"\n";

        }
    }
    return 0;
}
