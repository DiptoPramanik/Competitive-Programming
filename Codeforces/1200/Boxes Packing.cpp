#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    int mxFrequency = 0;
    for(int i=0;i<n;i++)
    {
        mxFrequency = max(mxFrequency,mp[v[i]]);
    }
    cout<<mxFrequency<<'\n';
    return 0;
}
