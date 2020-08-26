





Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome.

Example 1:
Input: "aba"
Output: True
Example 2:
Input: "abca"
Output: True
Explanation: You could delete the character 'c'.
Note:
The string will only contain lowercase characters a-z. The maximum length of the string is 50000.


















////////////////////////////////////////////////////////////////////////////////////////////////// 


 bool isPalin(string &s, int start, int end) {
        while(start < end) {
            if(s[start] != s[end])
                return false;
            ++start, --end;
        }
        return true;
    }
    
    // TC: O(N)
    // SC: O(1)
    bool validPalindrome(string s) {
        for(int i = 0, j = s.size()-1; i < j;  ++i, --j) {
            // mismatch found, only if it is the first time delete
            // a char and move on, else not possible
            if(s[i] != s[j]) {
                // s[0:i-1] and s[j+1, n-1] matched,
                // now we check if atleast s[i:j-1] or s[i+1:j] is a palindrome
                return (isPalin(s, i, j-1) || isPalin(s, i+1, j));
            }
        }
        return true;
    }
