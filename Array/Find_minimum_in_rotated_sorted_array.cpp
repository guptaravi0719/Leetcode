



Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

Find the minimum element.

You may assume no duplicate exists in the array.

Example 1:

Input: [3,4,5,1,2] 
Output: 1
Example 2:

Input: [4,5,6,7,0,1,2]
Output: 0




/////////////////////////////////////////////////////////////////////////////////////////////////////////

//method 1:
//sort the given rotated array...return arr[0]..done.

 int findMin(vector<int>& nums) {

        
        sort(nums.begin(),nums.end());
        return nums[0];
        
        
    }


//method 2:
//traverse the array, when you will get a[j]<a[i], return j........i is caled pivot around which array is 
//rotated


  int findMin(vector<int>& nums) {
        int element=0;
        int count =0;
        // if(nums.size()==1){
        //     return nums[0];
        // }
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i]>nums[i+1]){
                element=nums[i+1];
                 count=1;
                break;
               
            }
        }
        if(count==0){
        element=nums[0];
        }
        
        return element;
    }























