class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int canidiate = 0;

        for (int i = 0; i < nums.size(); i++) { // i = 1
            if (count == 0) {
                canidiate = nums[i]; // 3
            }

            if (nums[i] == canidiate) // False
                count++; 
            else    
                count--; // 0
        }
        return canidiate;
    }
};
