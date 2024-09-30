#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w; cin>>k>>n>>w;
    int total_expense = 0;
    for(int i=1;i<=w;i++)
    {
        total_expense+=i*k;
    }
    ///cout<<total_expense<<endl;
    if(total_expense<n) cout<<"0\n";
    else cout<<(total_expense - n)<<'\n';
    return 0;
}
