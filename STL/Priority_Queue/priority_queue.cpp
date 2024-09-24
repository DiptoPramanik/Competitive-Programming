#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///declaration
    priority_queue<int>pq;///o(log2(n))and gives the largest elements first
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    ///delete elment
    pq.pop();///delete 5
    ///first element
    cout<<pq.top()<<endl;///4
    ///size check
    cout<<pq.size()<<endl;///4
    ///is empty?
    cout<<pq.empty()<<endl;///0
    ///print all the element
    while(!pq.empty())
    {
        cout<<pq.top()<<' ';///4 3 2 1
        pq.pop();
    }
    cout<<endl;

    ///print the smallest element
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    p.push(5);
    while(!p.empty())
    {
        cout<<p.top()<<' ';///1 2 3  4 5
        p.pop();
    }
    cout<<endl;
    ///pair in priority_queue
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>x;
    x.push({1,2});
    x.push({2,3});
    x.push({2,4});
    x.push({3,4});
    x.push({4,4});
    while(!x.empty())
    {
        cout<<x.top().first<<' '<<x.top().second<<endl;
        /*  1 2
            2 3
            2 4
            3 4
            4 4 */
        x.pop();
    }
    return 0;
}
