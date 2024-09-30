#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    sort(s.begin(),s.end());
    int sz = unique(s.begin(),s.end()) - s.begin();
    ///cout<<sz<<endl;
    if(sz%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}
