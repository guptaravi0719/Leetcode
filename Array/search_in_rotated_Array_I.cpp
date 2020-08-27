33. Search in Rotated Sorted Array
level:Medium


Given an integer array nums sorted in ascending order, and an integer target.

Suppose that nums is rotated at some pivot unknown to you beforehand (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You should search for target in nums and if you found return its index, otherwise return -1.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1


////////////////////////////////////////////////////////////////////////////////////////////////////////

//method 1:  TC: O(N log N)
//store element and corresponding indices in hashmap  O(N)
// sort the array  O(NlogN)
// apply binary search for target O(logN)
//retun corresponding index of element by searching from hashmap O(1)
    
     int recursiveBinarySearch(vector<int>& array, int start_index, int end_index, int element){
   if (end_index >= start_index){
      int middle = start_index + (end_index - start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] > element)
         return recursiveBinarySearch(array, start_index, middle-1, element);
      return recursiveBinarySearch(array, middle+1, end_index, element);
   }
   return -1;
}
    
    
    int search(vector<int>& nums, int target) {
        if(nums.size()==0){
            return -1;
        }
        map<int , int > myMap;
        for(int i=0;i<nums.size();i++){
            myMap.insert(make_pair(nums[i],i));
            
        }
        sort(nums.begin(),nums.end());
       int x= recursiveBinarySearch(nums, 0, nums.size()-1,target);
        
        if(x==-1){
            return  -1;
            
        }
        else{

        return myMap[target];
        }
        
        
        
    }
