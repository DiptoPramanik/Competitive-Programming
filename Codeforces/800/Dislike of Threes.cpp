#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        int i=1;
        int cnt=0;
        while(1)
        {
            if(i%10!=3 && i%3!=0)
            {
                cnt++;
                if(x==cnt)
                {
                    cout<<i<<'\n';
                    break;
                }
            }

        }
    }
    return 0;
}
