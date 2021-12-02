#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    for(int i = 0 ; i < n ; i++)
        cin>>s[i];
    int ul = 1 , rl = 1 , silver = 0;
    for(int i = 0 ; i < (n-1) ; i++){
        if(s[i] == 'U')
            ul = ul + 1;
        else
            rl = rl + 1;
        if(s[i] == s[i+1] && ul == rl){
            silver++;
        }
    }
    cout<<silver<<"\n";
    return 0;
}
