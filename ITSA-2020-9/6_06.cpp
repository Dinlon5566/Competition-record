#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a[3],aa[3];
    int time,intime;
    cin>>time;
    for(int tt=0; tt<time; tt++)
    {
        cin>>intime;
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        for(int j=0; j<intime; j++)
        {
            for(int i=0; i<3; i++)
            {
                //num = (int) (num * temp + 0.5 ) / (temp);
                aa[i]=a[i]/2;//double(int((a[i]/2*1000+0.0005)))/1000;
                a[i]=0;
            }
            for(int i=0; i<3; i++)
            {
               for(int ii=0;ii<3;ii++){
                if(i!=ii){
                    a[i]+=aa[ii];
                }
               }
            }
        }
        printf("%.3f %.3f %.3f\n",a[0],a[1],a[2]);
    }
    return 0;
}
