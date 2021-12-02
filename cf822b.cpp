#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    const int maxn = 1050;

    vector < int > ans;
    vector < int > newAns;

    char t1[maxn];
    char t2[maxn];

    int n, m;
    scanf ( "%d%d\n", &n, &m );
    gets( t1 );
    gets( t2 );

    for ( int j = 0; j < n; j++ )
    	ans.pb( j );

    for ( int j = 0; j < m - n + 1; j++ ) {
    	newAns.clear();
    	for ( int i = 0; i < n; i++ )
    		if ( t1[i] != t2[i + j] )
    			newAns.pb( i );
    	if ( newAns.size() < ans.size() )
    		ans = newAns;
    }
    int sz = ans.size();
    printf( "%d\n", sz );
    for ( int j = 0; j < sz; j++ )
    	printf( "%d ", ans[j] + 1 );
    return 0;
}
