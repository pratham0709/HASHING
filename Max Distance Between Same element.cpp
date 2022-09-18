/*
Max distance between same elements
EasyAccuracy: 50.34%Submissions: 34061Points: 2
Given an array with repeated elements, the task is to find the maximum distance between two occurrences of an element.

Example 1:

Input
n= 6
arr = {1, 1, 2, 2, 2, 1}

Output
5

Explanation
arr[] = {1, 1, 2, 2, 2, 1}
Max Distance: 5
Distance for 1 is: 5-0 = 5
Distance for 2 is : 4-2 = 2
Max Distance 5
Example 2:

Input
n = 12
arr = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}

Output
10

Explanation



arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}
Max Distance 10
maximum distance for 2 is 11-1 = 10
maximum distance for 1 is 4-2 = 2
maximum distance for 4 is 10-5 = 5
Your Task:
Complete maxDistance() function which takes both the given array and their size as function arguments and returns the maximum distance between 2 same elements.


Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:

1<=N<=106

 

 

View Bookmarked Problems 
Topic Tags
ArraysHash

OUTPUT>>>>>
*/
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
    unordered_map<int,int>m;
    int ans = 0;
    for(int i =0; i<n; i++){
        if(m.find(arr[i])==m.end()){
            m.insert({arr[i], i});
        }
        else{
            int prevIndx = m[arr[i]];
            ans = max(ans, i-prevIndx);
        }
    }
    return ans;
    }
};
