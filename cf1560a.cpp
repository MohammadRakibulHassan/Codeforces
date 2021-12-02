#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1;
    vector<int> v(1001);
    for(int i = 1 ; n <= 1000 ; i++){
        if(i%3 == 0 || (i-3)%10 == 0){
            continue;
        }
        else{
            v[n]= i;
            n++;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<'\t'<<v[k]<<'\n';
    }
    return 0;
}
