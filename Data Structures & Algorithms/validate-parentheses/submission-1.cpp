class Solution {
public:
    bool isValid(string s) {

        stack<int> st;
        for(int i =0; i<s.size(); i++){
            char ch = s[i];
            if(ch=='(' || ch=='[' || ch=='{') st.push(ch);
            if(ch==')' || ch==']' || ch=='}'){
                if(st.empty()) return false;
                if(ch == ')' && st.top()=='(') st.pop();
                else if(ch == ']' && st.top()=='[') st.pop();
                else if(ch == '}' && st.top()=='{') st.pop();
                else return false;
            }
        }
        if(st.empty()) return true;
        else return false;
        
    }
};
