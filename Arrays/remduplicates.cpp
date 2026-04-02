// Problem: Remove Duplicates from Sorted Array
// Platform: LeetCode
// Difficulty: Easy
// Concept: Two Pointer
// Time Complexity: O(N)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0) return 0;
        
        int k = 1;  // first element always unique
        
        for(int i = 1; i < nums.size(); i++) {
            
            if(nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};

int main() {
    Solution obj;
    
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    
    int k = obj.removeDuplicates(nums);
    
    cout << "Number of unique elements: " << k << endl;
    
    cout << "Updated array: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}