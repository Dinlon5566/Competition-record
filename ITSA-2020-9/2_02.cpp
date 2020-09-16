#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string instr;
    vector <string> strlib= {"Hi", "Hello", "How do you do", "How are you"};
    int flag,time=0,check;
    while(getline(cin,instr))
    {
        flag=check=0;
        if(instr=="Bye")
        {
            cout<<"Bye"<<endl;
            break;
        }
        for(int i=0; i<4;i++)
        {
            if(instr==strlib[i])
            {
                check=1;
            }
        }
        if(check==1){
            cout<<strlib[time]<<endl;
            time++;
            if(time>3){
                time=0;
            }
        }else{
        cout<<"Sorry"<<endl;
        time=0;
        }

    }
    return 0;
}
