/*
217. Contains Duplicate
Easy

6571

1026

Add to List

Share
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109

OUTPUT>>>>>>>
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        unordered_set <int> s;
        
        for(int i = 0; i<n; i++){
            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
            }
            else{
                return true;
            }
        }
        return false;
    }
};
