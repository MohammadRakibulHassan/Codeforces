#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int  n,k,cnt=0;;
        cin>>n>>k;
        for(int h=0;h<26 && cnt<k;h++){
        for(int i=0,j=65;i<n && j<91;i++,j++){
            printf("%c",j);///65-117
            cnt++;
        }
        }
        cout<<endl;
    }
    return 0;
}
