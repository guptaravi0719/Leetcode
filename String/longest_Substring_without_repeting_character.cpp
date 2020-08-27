



Longest Substring Without Repeating Characters
level: Medium




Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.


/////////////////////////////////////////////////////////////////////////////////////////////////////////

//window approach using two pointer

int lengthOfLongestSubstring(string s) {
       int ans=0, i=0,j=0;
        set<char> s1;

        while(i<s.size()&&j<s.size()){

        if(s1.find(s[j])==s1.end()){

            //means element not found in set so add it.
            s1.insert(s[j++]);
       
            ans=max(ans,j-i);
            
            
            
        
        }
            else{

                s1.erase(s[i++]);
                
                
                
            }
            
            
        }
        
      return ans;  
        
    }
