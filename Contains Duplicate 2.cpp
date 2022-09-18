/*
219. Contains Duplicate II
Easy

3133

2112

Add to List

Share
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

 

Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
0 <= k <= 105
Accepted
521,656
Submissions
1,275,801

OUTPUT>>>>>
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n =nums.size();
        
        unordered_map<int,int>m;
        
        for(int i =0; i<n; i++){
            if(m.find(nums[i])==m.end()){
                m.insert({nums[i], i});
            }
            else{
                int prevIndx = m[nums[i]];
                if(i - prevIndx<=k){
                    return true;
                }
                m[nums[i]] = i;
            }
            
        }
        return false;
    }
};
