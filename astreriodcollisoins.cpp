#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{

    vector<int> v = {5, 10, -5};
    stack<int> st;

    for (auto i : v)
    {
        if (st.empty())
        {
            st.push(i);
        }
        else
        {
          while(!st.empty() and st.top() > 0 and st.top() < abs(i)) {
                    st.pop();
                }
                if(!st.empty() and st.top() == abs(i)) {
                    st.pop();
                }
                else {
                    if(st.empty() || st.top() < 0) {
                        st.push(i);
                    }
                } 
           
        }
    }
    int n=st.size()-1;
    vector<int> res(st.size(),0);
    while (!st.empty())
    {
        res[n--]=st.top();
        // res.push_back(st.top());
        st.pop();

    }
  
 
    for (auto i : res)
    {
        cout << i << " ";
    }
}