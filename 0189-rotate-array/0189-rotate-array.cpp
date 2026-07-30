class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> temp(nums.size()); 
        int j = 0;
        for (int i = nums.size() - k; i < nums.size(); i++) {
            temp[j] = nums[i];
            j++;
        } 
        
        for (int i = 0; i < nums.size() - k; i++) {
            temp[j] = nums[i];
            j++;
        }
        nums = temp;
    }
};
