#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int n = s.size();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            cout<<"YES\n";
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"NO\n";
    return 0;
}
