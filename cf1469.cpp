#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,an="";
        cin>>s;
        if(s.size()%2==1 || s[0]==')' || s[s.size()-1]=='(')
            an="NO";
        else an="YES";
        cout<<an<<'\n';
    }
    return 0;
}
