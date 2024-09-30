#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(a[k-1]==0)
        {
           if(a[i]>a[k-1]) cnt++;
        }
        else
        {
            if(a[i]>=a[k-1]) cnt++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}
