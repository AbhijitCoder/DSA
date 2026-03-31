// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// Return k.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k = 0;  // position for next valid element
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};

int main() {
    Solution obj;
    
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    
    int k = obj.removeElement(nums, val);
    
    cout << "Number of elements after removal: " << k << endl;
    
    cout << "Updated array: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}