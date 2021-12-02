#include<bits/stdc++.h>
using namespace std;
double t1 , t2;

int main()
{
    double h , m , s ;
    cin>>h>>m>>s>>t1>>t2;
    if(t1 > t2)
        swap(t1 , t2);
    int cnt = 0;

    if(s / 5.0 > t1 && s / 5.0 < t2)
        cnt++;
    if(m / 5.0 >= t1 && m / 5.0 < t2)
        cnt++;
    if(h >= t1 && h <  t2)
        cnt++;

    string ans ="";
    if(cnt > 0 && cnt < 3)
        ans="NO";
    else
        ans="YES";

    cout<<ans<<'\n';
    return 0;
}
