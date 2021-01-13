#include <iostream>

using namespace std;
int main()
{
    int time,sec;
    double ta,ans,fk;
    cin>>time;
    while(time--)
    {
        scanf("%lf,%d",&ta,&sec);
        ans=ta;
        for(int t=1;t<=sec;t++){
            ans+=t* 2.71828;
        }
        fk=(int)(ans*100000)%10;
        ans-=fk/100000;
        printf("%.4lf\n",ans);
    }
    return 0;
}
