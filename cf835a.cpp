#include<bits/stdc++.h>
using namespace std;
int main()
{

    int s , v1 , v2 , c1 , c2;
    cin>>s>>v1>>v2>>c1>>c2;
    int time1 = (s * v1) + (2 * c1);
    int time2 = (s * v2) + (c2 * 2);
    if(time1 < time2)
        cout<<"First\n";
    else if(time1 > time2)
        cout<<"Second\n";
    else if(time1 == time2)
        cout<<"Friendship\n";
    return 0;

}
