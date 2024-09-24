#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    return(ch=='a' ||ch=='i' || ch=='e' || ch=='o' || ch=='u' || ch=='y');
}
int main()
{
    string s;
    cin>>s;
    string ans;
    for(auto u:s)
    {
        char c = tolower(u);
        if(!isVowel(c))
        {
            ans+='.';
            ans+=c;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
