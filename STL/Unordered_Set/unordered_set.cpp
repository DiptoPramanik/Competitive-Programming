#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///Unordered set Declaration
    unordered_set<int>s;
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(1);
    s.insert(4);
    s.insert(5);

    ///elements will be unique but not sorted
    for(auto u:s) cout<<u<<' ';///5 3 2 1 4
    ///all operation are same as the SET
    return 0;
}
