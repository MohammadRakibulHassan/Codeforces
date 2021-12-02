#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1 , v2 , v3 , vm;
    cin>>v1>>v2>>v3>>vm;
    if(v3 > 2*vm || vm > 2*v3 || vm >= v2){
        cout<<-1<<'\n';
        return 0;
    }
    else{
        cout<<v1*2<<'\n'<<v2*2<<'\n'<<max(v3 , vm)<<'\n';
        return 0;
    }
}
