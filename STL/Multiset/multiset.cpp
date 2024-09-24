#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///All operations are same as SET
    ///elements will be sorted but not unique

    ///Declaration of Multiset
    multiset<int>s;
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    for(auto u:s) cout<<u<<' ';///2 2 2 3  3 4 5 5
    cout<<endl;
    cout<<s.count(2)<<endl;///O(log2(n))///3


    s.erase(2);///erase all the occurances of 2
    for(auto u:s) cout<<u<<' '; /// 3  3 4 5 5
    cout<<endl;


//    ///wanna remove one only occurances of 3
    auto it = s.find(3);
    s.erase(it);///O(log2(n))
    for(auto u:s) cout<<u<<' ';///3 4 5 5
    return 0;
}
