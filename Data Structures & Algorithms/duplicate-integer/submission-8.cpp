class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n==2){
            if(nums[0]==nums[1]){
                return true;
            }
        }
        for(int i = 1;i<n-1;i++){
            if(nums[i-1]==nums[i] or nums[i+1]==nums[i]){
                return true;
            }
        }
         return false;

    }
};