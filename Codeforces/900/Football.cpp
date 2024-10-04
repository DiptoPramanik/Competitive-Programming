#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int one=0,zero=0;
    int n = s.size();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            zero++;
            one=0;
            if(zero>=7)
            {
                cout<<"YES\n";
                flag=1;
                break;
            }
        }
        else
        {
            one++;
            zero=0;
            if(one>=7)
            {
                cout<<"YES\n";
                flag=1;
                break;
            }
        }
    }
    if(flag==0) cout<<"NO\n";
    return 0;
}
