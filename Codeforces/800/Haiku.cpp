#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    return(ch=='a' ||ch=='i' || ch=='e' || ch=='o' || ch=='u');
}
int main()
{
    vector<string>v;
    for(int i=0;i<3;i++)
    {
        string s;
        getline(cin,s);
        v.push_back(s);
    }
////    for(auto u:v)
////    {
////        cout<<u<<endl;
////    }
    int haikuArray[]={5,7,5};

    for(int i=0;i<3;i++)
    {
        int cnt=0;
        for(auto u:v[i])
        {
            if(isVowel(u)) cnt++;
        }
        if(cnt!=haikuArray[i])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
