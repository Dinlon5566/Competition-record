#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<double> allmoney;
    double num;
    int besta=0,bestb=0;
        double best=0;
    while(cin>>num){
        allmoney.push_back(num);
    }
    for(int i=allmoney.size()-1;i>0;i--){
            for(int j=i-1;j>=0;j--){
                if(allmoney[i]-allmoney[j]>best){
                    best=allmoney[i]-allmoney[j];
                    besta=j;
                    bestb=i;
                }
            }
        }
    if(best==0){
        cout<<"No profit!"<<endl;
    }else{
        double pf=(int)(best*1000)%10;
        best-=pf/1000;
        printf("Best buy date:%d\nBest sell date:%d\nProfit:%.2f",besta+1,bestb+1,best);
    }
    return 0;
}
