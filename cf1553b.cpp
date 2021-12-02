#include <bits/stdc++.h>
using namespace std;
int main()
{
   int q;
   cin>>q;
   while(q--){
       string s, t;
       cin>>s>>t;
       bool f = false;
       for (int i = 0; i < s.length(); i++) {
           string s1 = s.substr(0 , i + 1);
           string s2 = s.substr(0 , i);
           reverse(s2.begin() , s2.end());
           s1 += s2;
           if(s1.find(t) != -1) f = true;
       }
       if(f)
            cout<<'\t'<<"YES"<<'\n';
       else
            cout<<'\t'<<"NO"<<'\n';
   }
   return 0;
}
