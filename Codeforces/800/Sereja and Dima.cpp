#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int Sereja = 0,Dima = 0;
    int flag=1;
    while(!v.empty())
    {
        if(flag==1)
        {
            if(*v.begin()>v.back())
            {
                Sereja+=*v.begin();
                v.erase(v.begin());
            }
            else
            {
                Sereja+=v.back();
                v.pop_back();
            }
            flag = 2;
        }
        else
        {
            if(*v.begin()>v.back())
            {
                Dima+=*v.begin();
                v.erase(v.begin());
            }
            else
            {
                Dima+=v.back();
                v.pop_back();
            }
            flag = 1;
        }
    }
    cout<<Sereja<<' '<<Dima<<endl;
    return 0;
}
