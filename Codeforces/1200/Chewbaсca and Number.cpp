#include <bits/stdc++.h>
using namespace std;
int main() {

    long long int n; cin>>n;
    int a[20];
    int cnt = 0;
    while(n>0)
    {
        a[cnt++] = n%10;
        n/=10;
    }
    // for(int i=0;i<cnt;i++)
    // {
    //     cout<<a[i]<<' ';
    // }
    //cout<<cnt<<endl;
     reverse(a+0,a+cnt);
    // for(int i=0;i<cnt;i++)
    //  {
    //      cout<<a[i]<<' ';
    //  }
     int tmp = a[0];
     for(int i=0;i<cnt;i++)
     {
        int rev = 9 - a[i];
        if(rev<a[i])
        {
            a[i] = rev;
        }
     }
     if(a[0]==0) a[0] = tmp;
     for(int i=0;i<cnt;i++)
     {
        cout<<a[i];
     }
     cout<<endl;
    return 0;
}
