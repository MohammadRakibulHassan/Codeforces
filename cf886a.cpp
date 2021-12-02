#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6] , sum = 0;
    for(int i = 0 ; i < 6 ; i++){
        cin>>a[i];
    }
    sort(a , a+6);
    do{
       if(accumulate(a , a+3 , 0) == accumulate(a+3 , a+6 , 0)){
            cout<<"YES\n";sum = 1;
            break;
       }
    }
    while(next_permutation(a , a+6));
    if(!sum)cout<<"NO\n";
    return 0;
}
