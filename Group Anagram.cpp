/*
49. Group Anagrams
Medium

11686

368

Add to List

Share
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]
 

Constraints:

1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.

*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>m;
        
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if(m.find(temp) == m.end()){
                m.insert({temp,{strs[i]}});
            }
            else{
                vector<string> v = m.find(temp)->second;
                v.push_back(strs[i]);
                m.find(temp)->second = v;
                
            }
        }
        vector<vector<string>> ans;
        for(auto it = m.begin(); it!= m.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};
