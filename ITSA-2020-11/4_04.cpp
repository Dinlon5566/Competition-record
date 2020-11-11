#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time,fig;
    cin>>time;
    while(time--){
        cin>>fig;
        int awin=0,bwin=0;
        int a[fig];
        int b[fig];
        for(int i=0;i<fig;i++){
        cin>>a[i];
        }
        for(int i=0;i<fig;i++){
        cin>>b[i];
        }
        sort(a,a+fig);
        sort(b,b+fig);
        reverse(b,b+fig);
        for(int i=0;i<fig;i++){
            if(a[i]>b[i]){
                awin++;
            }else if(b[i]>a[i]){
                bwin++;
            }
        }
        cout<<awin<<" "<<bwin<<endl;
    }
    return 0;
}
