#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int u=0,l=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z') u++;
        else l++;
    }
    ///cout<<u<<' '<<l<<'\n';
    if(u>l)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<'\n';
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<'\n';
    }
    return 0;
}
