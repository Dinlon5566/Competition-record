#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time,len,ans;
    cin>>time;
    string line;
    while(time--)
    {
        ans=0;
        cin>>len;
        int seamap[len][len];
        for(int n=0; n<len; n++)
        {
            for(int m=0; m<len; m++)
            {
                seamap[n][m]=0;
            }
        }

        for(int n=0; n<len; n++)
        {
            cin>>line;
            for(int m=0; m<len; m++)
            {
                seamap[n][m]=line[m]-'0';
            }
        }
        for(int n=1; n<len-1; n++)
        {
            for(int m=1; m<len-1; m++)
            {
                if(seamap[n][m]==1)
                {
                    if(seamap[n+1][m]==1)
                    {
                        if(seamap[n-1][m]==1)
                        {
                            if(seamap[n][m+1]==1)
                            {
                                if(seamap[n][m-1]==1)
                                {
                                    if(seamap[n-1][m-1]==1)
                                    {
                                        if(seamap[n+1][m-1]==1)
                                        {
                                            if(seamap[n+1][m+1]==1)
                                            {
                                                if(seamap[n-1][m+1]==1)
                                                {
                                                    ans++;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
