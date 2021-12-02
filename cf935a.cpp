#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N , cnt = 0;
    cin>>N;
    for(int i = 1 ; i <= N ; i++){
        int n = N;
        n = n - i;
        if(n % i == 0){
            cnt++;
        }
    }
    cout<<cnt-1<<'\n';
    return 0;
}
