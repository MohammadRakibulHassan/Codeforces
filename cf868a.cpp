#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string x[n];
    for(int i = 0 ; i < n ; i++)
        cin>>x[i];
    bool flag = false , flag1 = false , flag2 = false;;
    for(int i = 0 ; i < n ; i++){
        if(x[i]==s){
            flag = true;
            break;
        }
        else{
            for(int j = 0 ; j < n ; j++){
                if(s[0] == x[j][1])
                    flag1 = true;
                if(s[1] == x[j][0])
                    flag2 = true;
            }
        }
    }
    if(flag || (flag1 &&flag2))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
