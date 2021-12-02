#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , stof = 0 , ftos = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'S' && s[i+1] == 'F')
            stof++;
        else if(s[i] == 'F' && s[i+1] == 'S')
            ftos++;
    }
    if(stof > ftos) cout<< "YES" <<'\n';
    else cout<< "NO"<<'\n';
    return 0;
}
