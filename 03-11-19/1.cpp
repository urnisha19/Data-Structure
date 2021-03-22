#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>st;
    st.push('a');
    st.push('b');
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;
}
