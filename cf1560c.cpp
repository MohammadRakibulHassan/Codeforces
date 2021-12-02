#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int r, c;
        int step = sqrt(k - 1);
		int nth = k - (step*step);
		if (nth <= step + 1) {
			r = nth;
			c = step + 1;
		} else {
			r = step + 1;
			c = (step + 1) - (nth - step) + 1 ;
		}
        cout<<r<<' '<<c<<'\n';
    }
    return 0;
}
/*vector<vector<int>> v;
        int l = sqrt(k) , frst = (k)*(k) + 1;
        for(int i = 1 ; i <= l ; i++){
            v[i][l] = frst;
            if(v[i][l] == k){
                r = i;
                c = l;
            }
            frst++;

        }
        for(int i = l-1 ; i > 0 ; i--){
            v[l][i] = frst;
            if(v[l][i] == k){
                r = l;
                c = i;
            }
            frst++;
        }*/
