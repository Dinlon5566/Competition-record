#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time,bag,chg;
    cin>>time;
    while(time--)
    {
        chg=0;
        cin>>bag;
        int line[bag];
        for(int i=0; i<bag; i++)
        {
            cin>>line[i];
        }

        for(int i=0; i<bag; i++)
        {
            if(line[i]!=i)
            {
                swap(line[line[i]],line[i]);
                chg++;
                i=0;
            }
        }
        printf("%d\n",chg);
    }
    return 0;
}
