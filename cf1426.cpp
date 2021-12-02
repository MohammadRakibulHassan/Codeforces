#include<iostream>
using namespace std;
int main()
{
    int tc,aptNo,numofApt;
    cin>>tc;
    while(tc--){
        cin>>aptNo>>numofApt;
        int floor=1;
        if(aptNo>2){
            for(int i=3;i<=aptNo;i=i+numofApt){
                floor=floor+1;
            }//--floor;
        }
        cout<<floor<<endl;
    }
    return 0;
}
