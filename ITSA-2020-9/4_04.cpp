#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time;
    cin>>time;
    for(int time_count=0; time_count<time; time_count++)
    {
        int n;
        cin >> n;
        int arr[1000] = { 0 };
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int pos = 1; pos < n - 1; pos++)
        {

            int lmax = 0;
            for (int j = 0; j <= pos; j++)
            {
                if (arr[j] > lmax)
                {
                    lmax = arr[j];
                }
            }

            int rmax = 0;
            for (int j = pos; j < n; j++)
            {
                if (arr[j] > rmax)
                {
                    rmax = arr[j];
                }
            }
            int minmax = 0;
            if (rmax > lmax)
                minmax = lmax;
            else
                minmax = rmax;
            sum += minmax - arr[pos];
        }
        cout << sum << endl;
    }
    return 0;
}
