#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    string s = "codeforces";
    while(t--)
    {
        char ch; cin>>ch;
        int n = s.size();
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==ch)
            {
                cout<<"YES\n";
                flag = 1;
                break;
            }

        }
        if(flag==0) cout<<"NO\n";
    }
    return 0;
}
