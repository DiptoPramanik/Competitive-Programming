#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///can push and pop front and  back both side ans O(1)
    ///declaration
    deque<int>dq;
    ///push front
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    ///push back
    dq.push_back(9);
    dq.push_back(5);
    dq.push_back(8);
    ///pop front
    dq.pop_front();
    ///pop back;
    dq.pop_back();
    ///front and back
    cout<<dq.front()<<' '<<dq.back()<<endl;///2 5
    ///check size
    cout<<dq.size()<<endl;///4
    ///is empty?
    cout<<dq.empty()<<endl;///0
    return 0;
}
