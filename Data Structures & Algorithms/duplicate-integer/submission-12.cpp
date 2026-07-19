class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
             int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n==1) return false;
        if(n==2){
            if(nums[0]==nums[1]) return true;
            else return false;
        }
        for(int i = 0 ;i<n-1;i++){
            if(nums[i]==nums[i+1]) return true;

        }
        return false;
    }
};