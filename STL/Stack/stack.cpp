#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// Stack Declaration
    ///last in first out
    ///O(1)
    stack<int>st;

    ///input taking
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    ///no iterator

    ///upper element
    cout<<st.top()<<endl;;///6
    ///delete upper element;
    st.pop();

    ///check empty?
    cout<<st.empty()<<endl;///0

    ///print all the elements
    while(!st.empty())
    {
        cout<<st.top()<<' ';///5 4 3 2 1
        st.pop();
    }
    cout<<endl;

     ///check size of stack
    cout<<st.size()<<endl; ///0



    return 0;
}
