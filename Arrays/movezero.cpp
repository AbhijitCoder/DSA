class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        int insertPos = 0;   // position to place next non-zero
        
        // Step 1: Move all non-zero elements forward
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                nums[insertPos] = nums[i];
                insertPos++;
            }
        }
        
        // Step 2: Fill remaining positions with zeros
        while(insertPos < n) {
            nums[insertPos] = 0;
            insertPos++;
        }
    }
};
