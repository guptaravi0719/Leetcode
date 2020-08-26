








Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false



///////////////////////////////////////////////////////////////////////////////////////////


//Method 1:
// SOrt two string, if they wqual then they are anagrams to  each  other
 bool isAnagram(string s, string t) {
        if(s.size()==0&&t.size()==0){
            return true;
        }
        else if(s.size()==0||t.size()==0){
            return false;
        }
        sort(s.begin(),s.end());
    sort(t.begin(),t.end());
        
 
        if(s==t){
            return true;
        }
        return false;
    }


//method 2: 
// count occurance of each character in each both string ,if occurance of each character is same in both strings then they are anagrams of each other




















