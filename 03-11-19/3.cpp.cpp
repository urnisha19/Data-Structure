#include<bits/stdc++.h>
using namespace std;
int precedence(char op)
{
    if(op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
}
int main()
{
    string infix,postfix;
    stack<char>st;
    int i,j,len;
    cin>>infix;
    infix += ')';
    st.push('(');
    len=infix.size();
    for(i=0; i<len; i++)
    {
        if(infix[i]=='(')
        {
            st.push('(');
        }
        else if(isalpha(infix[i]) || (infix[i]>='0' && infix[i]<='9'))
        {
            postfix+=infix[i];
        }
        else if(infix[i]==')')
        {
            while (st.top()!='(')
            {
                postfix+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if((infix[i]=='^')||(infix[i] == '*')||(infix[i] == '/')||(infix[i] == '+')||(infix[i] == '-'))
        {
            while((st.top()=='^'||st.top()=='*'|| st.top()=='/'||st.top()=='+'||st.top()=='-') && (precedence(infix[i]) <= precedence(st.top())))
            {
                postfix+=st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
    }
    cout<<postfix<<endl;
    return 0;
}
