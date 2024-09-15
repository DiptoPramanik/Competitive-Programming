#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int b,p,f; cin>>b>>p>>f;
        int h,c; cin>>h>>c;
        int mxPrice = h;
        int mxPricePaticeNum = p;
        int mnPrice = c;
        int mnPricePaticeNum = f;

        if(mxPrice<mnPrice)
        {
            mxPrice = c;
            mxPricePaticeNum = f;
            mnPrice = h;
            mnPricePaticeNum = p;
        }
        int totalProfit = 0;
        int burgerNum = b/2;
        if(burgerNum<mxPricePaticeNum)
        {
            totalProfit+=(burgerNum*mxPrice);
            burgerNum = 0;
        }
        else
        {
            totalProfit+=(mxPricePaticeNum*mxPrice);
            burgerNum -=mxPricePaticeNum;
        }

        if(mnPricePaticeNum>burgerNum)
        {
            totalProfit+=(burgerNum*mnPrice);
            burgerNum = 0;
        }
        else
        {
            totalProfit+=(mnPricePaticeNum*mnPrice);
        }
        cout<<totalProfit<<endl;
    }
    return 0;
}
