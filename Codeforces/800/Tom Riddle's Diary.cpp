#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    map<string,string>ip;
    while(n--)
    {
       string serverName,ipNo; cin>>serverName>>ipNo;
       ip[ipNo] = serverName;
    }
    while(m--)
    {
        string s1,s2; cin>>s1>>s2;
        s2.pop_back();
        cout<<s1<<' '<<s2<<';'<<' '<<'#'<<ip[s2]<<endl;
    }
    return 0;
}
