#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time,getflag,tmpt,tmploc,id;
    cin>>time;
    string carname;
    vector<string> car;
    vector<int> badid;
    vector<int> loc;
    vector<int> t;

    for(int i=0;i<time;i++){
            cin>>tmpt>>tmploc>>carname;
        if(car.empty()==1){
            car.push_back(carname);
            loc.push_back(tmploc);
            t.push_back(tmpt);
            id=0;
        }else{
            getflag=0;
            for(int j=0;j<car.size();j++){
                if(carname==car[j]){
                    id=j;
                    getflag=1;
                }
            }
            if(getflag==0){
                id=car.size();
                car.push_back(carname);
                loc.push_back(tmploc);
                t.push_back(tmpt);
            }else{
                if(tmploc!=loc[id]){
                    if(tmpt-t[id]<3){
                        badid.push_back(id);
                    }
                }
                loc[id]=tmploc;
                t[id]=tmpt;
            }
        }
    }
    string ans[badid.size()];
    for(int i=0;i<badid.size();i++){
            ans[i]=car[badid[i]];
        }
        sort(ans,ans+badid.size());
        for(int i=0;i<badid.size();i++){
            cout<<ans[i]<<endl;
        }
    return 0;
}
