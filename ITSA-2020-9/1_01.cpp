#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int k,l,m;
string ty;
cin>>k;
cin>>ty;
if(ty=="km"){
    k*=1000;
}
cin>>l;
cin>>ty;
if(ty=="km"){
    l*=1000;
}
cin>>m;
cin>>ty;
if(ty=="km"){
    m*=1000;
}
int now=0;
int time=0;
while(now<k){
    now+=l;
    time+=30;
    if(now>=k){
        break;
    }
    now-=m;
    time+=5;
}
cout<<time<<endl;
    return 0;
}
