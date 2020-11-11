#include <iostream>
using namespace std;
int main()
{
    string strtar[12]={"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
    int time,tarid,type,len,id0,id1,id2;
    string tar;
    cin>>time;
    while(time--){
        cin>>tar;
        len=tar.size()-1;
        type=0;
        if(tar[len]=='m'){
            type=1;
            tar.erase(len);
        }
        for(int i=0;i<12;i++){
            if(tar==strtar[i]){
                tarid=i;
                id0=i;
                break;
            }
        }
        if(type==0){
            id1=tarid+4;
            id2=id1+3;
        }else{
            id1=tarid+3;
            id2=id1+4;
        }
        cout<<strtar[id0]<<" "<<strtar[id1%12]<<" "<<strtar[id2%12]<<endl;
    }
    return 0;
}
