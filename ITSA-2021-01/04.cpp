#include <iostream>

using namespace std;

int main()
{
    int time,human,first,win,die,now,clk;
    cin>>time;
    while(time--){
            win=die=0;
        cin>>human>>first;
        int line[human];
        for(int i=0;i<human;i++){
            line[i]=1;
        }
        line[first]=0;
        now=first;
        die++;
        clk=1;
        while(die<human-1){
            now++;
        if(now>=human){
            now=0;
        }
            if(line[now]==1){
                if(clk==0){
                    line[now]=0;
                    die++;
                    clk=1;
                }else{
                    clk--;
                }
            }
        }
        for(int i=0;i<human;i++){
            if(line[i]==1){
                win=i+1;
            }
        }
        printf("%d\n",win);
    }
    return 0;
}
