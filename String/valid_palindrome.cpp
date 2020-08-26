Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
 

//////////////////////////////////////////////////////////////////////////////////////////////////////////




  bool isPalindrome(string s) {
        int count=0;
        if(s.size()==0){
            return true;
    }
        int l=0;
        int r= s.size()-1;
        
        
        
        while(l<r){
            
             while(l < r && !isalnum(s[l]))
                ++l;
            while(r > l && !isalnum(s[r]))
                --r;
            if(tolower(s[l])!=tolower(s[r])){
            return false;
            }
           l++;
            r--;
            
        }

        
        return true;
    }
