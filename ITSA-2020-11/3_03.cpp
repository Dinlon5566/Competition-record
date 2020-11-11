#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time,numoflight,lon,ans;
    cin>>time;
    while(time--){
        ans=lon=0;
        cin>>numoflight;
        int light[numoflight];
        for(int i=0;i<numoflight;i++){
            cin>>light[i];
            ans+=lon+(light[i]/2);
            lon+=light[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
