class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int j=0,num;
        // for(int i=0;i<nums.size();i++){
            
        //         if(i!=nums[j]){
        //         num=i;
        //         j++;
        //         }
        // }
        // while(j<nums.size()+1){
        //     for(int i=0;i<nums.size();i++){
        //         if(j==nums[i]){
        //             j++;
        //         }
        //         else 
        //         num=j;
        //     }
        // }

        
        int sum = 0; 
        int total = nums.size()*(nums.size() + 1)/2;
        for (auto number : nums) { 
            sum += number; 
        }
        return total - sum;
    }
    
    
};