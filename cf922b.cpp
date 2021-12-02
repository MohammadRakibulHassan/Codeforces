#include<bits/stdc++.h>
using namespace std;
bool tri(int a , int b , int c)
{
    return (a+c > b && a+b > c);
}
int main()
{
    int n , ans = 0;
    scanf("%d" , &n);
    for(int i = 1 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            int a = i , b = j , c = (a ^ b);
            if(tri(a , b , c) && c <= n && c >= b)
                ans += 1;
        }
    }
    printf("%d\n" , ans);
    return 0;
}
