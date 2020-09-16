#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//65-90 97-122
int main()
{
    int time;
    char str[101];
    cin>>time;
    for(int ttt=0; ttt<=time; ttt++)
    {
        for(int i=0; i<101; i++)
        {
            str[i]='\0';
        }
        gets(str);
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]<=90&&str[i]>=65)
            {

                str[i]=str[i]+13;
                if(str[i]>90)
                {
                    str[i]=str[i]-26;
                }


            }
            else if(str[i]<=122&&str[i]>=97)
            {

                if(str[i]+13>122)
                {
                    str[i]=str[i]-13;
                }else{
                str[i]=str[i]+13;
                }
            }
        }



        for(int k=0; k<len; k++)
        {
            cout<<str[k];
        }
        cout<<endl;
    }
    return 0;
}
