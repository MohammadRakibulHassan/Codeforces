#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int even=0,odd=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<even<<" ";
                even=even+2;
            }
            else{
                cout<<odd<<" ";
                odd=odd+2;
            }
        }
        cout<<"\n";
    }
    return 0;

}
