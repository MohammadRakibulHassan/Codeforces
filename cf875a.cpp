#include<bits/stdc++.h>
using namespace std;
int n;
bool f(int x)
{
    int temp = x;
    while(temp){
        x = x + (temp % 10);
        temp = temp / 10;
    }
    return x == n;
}
int main()
{
    scanf("%d" , &n);
    vector<int> ans;
    for(int i = max(n - 1000 , 0) ; i <= n ; i++){
        if(f(i)){
            ans.push_back(i);
        }
    }
    printf("%d\n" , ans.size());
    for(auto r : ans)
        printf("%d\n" , r);
    return 0;
}
