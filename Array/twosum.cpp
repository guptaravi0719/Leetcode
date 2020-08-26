
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]


/////////////////////////////////////////////////////////////////////////////////////////////////////


//C++ solution
method 1:   o(n^2)

//Bruteforce


vector<int> twoSum(vector<int>& nums, int target) {
 
        vector<int> return_indices;
         
        if(nums.size()==0){return return_indices;}
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return_indices.push_back(i);
                    return_indices.push_back(j);
                }
            }
            
            
            
        }
        
        
        
    return return_indices;    
        

//Method 2 : O(n)

// Two pointer Approach

vector<int> twoSum(vector<int>& nums, int target) {
          vector<int> indices;
        vector<pair<int,int>> myVector;
        int i=0;
        
        for(auto ele: nums)
        {
            myVector.push_back(make_pair(ele,i++));
        }
        
        sort(myVector.begin(), myVector.end());
        int l=0,r=nums.size()-1;
        
        while(l<r)
        {
            if(myVector[l].first+myVector[r].first==target)
            {
                indices.push_back(myVector[l].second);
                indices.push_back(myVector[r].second);
                break;
            }
            else if(myVector[l].first+myVector[r].first>target)
            {
                r--;
            }
            else l++;
        }
        return indices;
    }

  }


