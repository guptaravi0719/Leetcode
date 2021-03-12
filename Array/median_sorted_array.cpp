
4. Median of Two Sorted Arrays
Hard

9409

1453

Add to List

Share
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
Example 3:

Input: nums1 = [0,0], nums2 = [0,0]
Output: 0.00000
Example 4:

Input: nums1 = [], nums2 = [1]
Output: 1.00000
Example 5:

Input: nums1 = [2], nums2 = []
Output: 2.00000


///////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m,n;
        
        
m=nums1.size();
        n=nums2.size();

        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            v.push_back(nums2[i]);
            
        }
        sort(v.begin(),v.end());
      if(m+n==0){
          return 0;
      }  
        double median;
    if((m+n)%2!=0){
        median=  v[v.size()/2];
        
        
    } 
        if((m+n)%2==0){
        median=   (double) (v[(v.size()/2)-1]+v[(v.size()/2)])/2;
            
            
            
        }
        
        return median;
    }
};
