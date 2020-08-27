Remove All Adjacent Duplicates In String
level: Easy


Given a string S of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and removing them.

We repeatedly make duplicate removals on S until we no longer can.

Return the final string after all such duplicate removals have been made.  It is guaranteed the answer is unique.

 

Example 1:

Input: "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
 

Note:

1 <= S.length <= 20000
S consists only of English lowercase letters.


///////////////////////////////////////////////////////////////////////////////////////////////////////


//method 1  ,,
// two pointer solution


   string removeDuplicates(string s) {
         if(s.size()==0){
            return "";
        }

         int i=0;
        auto j=i+1;
        int n=s.size();
        while(j<n){
            if(s[j]!=s[i]){    // if not duplicate then increment
                i++;
                j++;


            }
            else if(s[i]==s[j]){
                // if(s[j]==s[j+1]){
                //     j++;
                // }
                // else{
                s.erase(s.begin()+i,s.begin()+j+1);
                n=s.size();  //updating  n value for proper functioning of while loop
                i=0;
                j=i+1;
              //  }
            }

        }

     return s;
        }
