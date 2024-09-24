#include<bits/stdc++.h>
using namespace std;
const int mx  = 2e5+123;
int a[mx];
int b[mx];
int c[mx];

int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++) cin>>c[i];
    priority_queue<int,vector<int>,greater<int>>pq[5][5];
    for(int i=1;i<=n;i++) pq[b[i]][c[i]].push(a[i]);
    int m; cin>>m;
    while(m--)
    {
        int color; cin>>color;
        int front_color,back_color;
        int total_profit = INT_MAX;
        for(int i=1;i<=3;i++)
        {
           if(!pq[color][i].empty() && pq[color][i].top()<total_profit)
           {
               front_color = color;
               back_color = i;
               total_profit = pq[color][i].top();
           }
        }
        for(int i=1;i<=3;i++)
        {
           if(!pq[i][color].empty() && pq[i][color].top()<total_profit)
           {
               front_color = i;
               back_color = color;
               total_profit = pq[i][color].top();
           }
        }
        if(total_profit==INT_MAX) total_profit = -1;
        else pq[front_color][back_color].pop();
        cout<<total_profit<<' ';
    }
    cout<<'\n';
    return 0;
}
