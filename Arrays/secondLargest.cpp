class Solution {
public:
    int secondLargest(vector<int>& nums) {
        
        if(nums.size() < 2) return -1;

        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for(int num : nums) {
            
            if(num > largest) {
                secondLargest = largest;
                largest = num;
            }
            else if(num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }

        if(secondLargest == INT_MIN) return -1;
        
        return secondLargest;
    }
};
