problem Statement: 

Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:

Input: [1,2,3,1]
Output: true
Example 2:

Input: [1,2,3,4]
Output: false
Example 3:

Input: [1,1,1,3,3,4,3,2,4,2]
Output: true


///////////////////////////////////////////////////////////////////////////////////////////////////

//C++ Solution




 bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==0){return false;}
       int countx=0;

        sort(nums.begin(),nums.end());


    for(int i=0;i<nums.size()-1;i++){

    if(nums[i]==nums[i+1]){

    countx++;

    }

    }


       if(countx!=0){
           return true;
       }
        return false;
    } 
