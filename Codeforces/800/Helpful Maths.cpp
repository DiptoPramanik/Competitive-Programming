#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int n = s.size();
    string ans;
    for(int i=0;i<n;i+=2)
    {
        ans+=s[i];
    }
    sort(ans.begin(),ans.end());
    ///cout<<ans<<'\n';
    int m = ans.size();
    cout<<ans[0];
    for(int i=1;i<m;i++)
    {
        cout<<'+'<<ans[i];
    }
    return 0;
}
