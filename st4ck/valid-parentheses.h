#include <string>
#include <stack>
using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;

            for(char c : s)
            {
                if(c == '(' || c == '{' || c == '[' )
                {
                    st.push(c);
                }
                else if(c == ')' || c == '}' || c == ']')
                {
                    if(st.empty()) return false;
                    if ((c == ')' && st.top() != '(') ||
                        (c == '}' && st.top() != '{') ||
                        (c == ']' && st.top() != '[')) 
                    {
                        return false;
                    }
                    st.pop(); // ถ้า match แล้ว ค่อย pop
                }
            }
            
            return st.empty();
        }
    };