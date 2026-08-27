class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int var1 = 0;
        int flag = 0;

        for(int i = 0; i < n; i++) {
            var1 = nums[i];

            for(int j = i + 1; j < n; j++) {
                if(nums[i] == nums[j]) {
                    flag = 1;
                }
            }
        }

        if(flag == 1)
            return true;
        else
            return false;
    }
};