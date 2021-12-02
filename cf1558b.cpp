#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 4000100;
int N, M;
ll res[MAXN];
ll dres[MAXN];
int main()
{
    cin >> N >> M;
    for (int i = 0; i < MAXN; i++){
        res[i] = 0;
        dres[i] = 0;
    }
    dres[1] = 1;
    for (int i = 1; i <= N; i++){
        res[i] = (2 * res[i-1] + dres[i]) % M;
        if (i == 2) res[i]--;
        for (int j = 2 * i; j <= N; j += i)
            dres[j] = (dres[j] + (res[i] - res[i-1] + M)) % M;
    }
    cout << '\t' << res[N] % M << "\n";
    return 0;
}
