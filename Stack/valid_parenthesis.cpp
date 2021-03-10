







//////////////////////////////////////////////////////////////////////////////c
c20. Valid Parentheses
Easy

6971

288

Add to List

Share
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

///////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    bool isValid(string s) {
      if(s.size()==0){
            return true;
        }
        if(s.size()==1){
            return false;
        }
        stack<char> st;
        for(int i=0;i<s.size();i++){
           if(s[i]=='('||s[i]=='{'||s[i]=='['){
               st.push(s[i]);
               
           } 
       //    cout << st.size()<< endl;
        if(s[i]==')'){
            if(st.size()==0){
                return false;
            }
            if(st.top()=='['||st.top()=='{'){
                return false;
            }
            else{
                st.pop();
            }
            
        }
          if(s[i]==']'){
                  if(st.size()==0){
                return false;
            }
             if(st.top()=='{'||st.top()=='('){
                return false;
            }
            else{
                st.pop();
            }
           
        }
             if(s[i]== '}' ){
               if(st.size()==0){
                return false;
            }
            if(st.top()=='('||st.top()=='['){
                return false;
            }
            else{
                st.pop();
            }
        }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
