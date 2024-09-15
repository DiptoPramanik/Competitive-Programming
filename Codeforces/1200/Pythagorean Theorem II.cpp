#include<bits/stdc++.h>
using namespace std;
const int mx = 1e8+123;
bool visited[mx];
int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        visited[i*i] = 1;
    }
//    for(int i=1;i<=36;i++)
//    {
//        cout<<visited[i]<<endl;
//    }
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int d = i*i+j*j;
            if(d>=mx) break;
            if(visited[d]) ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
