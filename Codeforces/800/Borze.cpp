#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int n = s.size();
    for(int i=0;i<n;)
    {
       if(s[i]=='.')
       {
           i++;
           cout<<0;
       }
       if(s[i]=='-' && s[i+1]=='.')
       {
           i+=2;
           cout<<1;
       }
       if(s[i]=='-' && s[i+1]=='-')
       {
           i+=2;
           cout<<2;
       }
    }
    cout<<'\n';
    return 0;
}
