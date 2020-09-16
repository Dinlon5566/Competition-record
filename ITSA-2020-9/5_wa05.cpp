#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int a,b,c,d;
    cin>>n>>m;
    char mmap[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mmap[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mmap[i][j]=='B')
            {
                a=b=i;
                c=d=j;
                a+=1;
                while(a>=0&&(mmap[a][j]=='0'||mmap[a][j]=='x'))
                {
                    mmap[a][j]='x';
                    a++;
                }
                b-=1;
                while(b<n&&(mmap[b][j]=='0'||mmap[b][j]=='x'))
                {
                    mmap[b][j]='x';
                    b--;
                }
                c+=1;
                while(c<m&&(mmap[i][c]=='0'||mmap[i][c]=='x'))
                {
                    mmap[i][c]='x';
                    c++;
                }
                d--;
                while(d>=0&&(mmap[i][d]=='0'||mmap[i][d]=='x'))
                {
                    mmap[i][d]='x';
                    d--;
                }
            }
        }
    }
    //small b
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mmap[i][j]=='b')
            {
                a=b=i;
                c=d=j;
                a+=1;
                while(a>=0&&(mmap[a][j]=='0'||mmap[a][j]=='x'))
                {
                    mmap[a][j]='x';
                    a++;
                    break;
                }
                b-=1;
                while(b<n&&(mmap[b][j]=='0'||mmap[b][j]=='x'))
                {
                    mmap[b][j]='x';
                    b--;
                    break;
                }
                c+=1;
                while(c<m&&(mmap[i][c]=='0'||mmap[i][c]=='x'))
                {
                    mmap[i][c]='x';
                    c++;
                    break;
                }
                d--;
                while(d>=0&&(mmap[i][d]=='0'||mmap[i][d]=='x'))
                {
                    mmap[i][d]='x';
                    d--;
                    break;
                }


            }
        }
    }



int con=0;
    //print map
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mmap[i][j]=='x'){
                con++;
            }
        }
    }
cout<<con<<endl;
    return 0;
}
