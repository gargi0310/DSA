class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        stack<char> st;

        for (int i: s){
            if(i=='('){
                if(!st.empty()){
                    res.push_back(i);
                }

                st.push(i);
            }

            else{
                st.pop();
                if(!st.empty()){
                    res.push_back(')');
                }
            }
        }

        return res;
    }
};
