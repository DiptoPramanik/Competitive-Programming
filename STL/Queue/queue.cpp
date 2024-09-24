#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///first in first out and O(1)
    ///declaration
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl;///1
    q.pop();///delete 1
    ///size check
    cout<<q.size()<<endl;///4
    ///is empty?
    cout<<q.empty()<<endl;///0
    ///print all the element
    while(!q.empty())
    {
       cout<<q.front()<<' '; ///2 3 4 5
       q.pop();
    }
    cout<<endl;
    return 0;
}
