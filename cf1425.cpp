#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        long long arr[2];
        arr[0]=0;arr[1]=0;
        long long g=0,u=0;
        while(n){
            if(n%2 == 0 && ((n/2)%2 || n==4)){
                arr[u%2]=arr[u%2]+(n/2);
                n=n/2;
            }
            else{
                arr[u%2]=arr[u%2]+1;
                n=n-1;
            }
            u=u+1;
        }
        cout<<arr[0]<<"\n";
    }
    return 0;
}



/*
        long n,u=0;
        long long a[2]={}long;
        cin>>n;
        while(n){
            if(n%2==0&&((n/2)%2||n==4)){
                a[u%2]+=n/2;
                n/=2;
            }
            else{
                n--;
                a[u%2]++;
            }
            u++;
        }
        cout<<a[0]<<endl;*/
