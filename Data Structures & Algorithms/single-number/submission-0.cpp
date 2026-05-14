class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = nums[n-1];
        for(int i = 0 ;i<n-1;i+=2){
            if(nums.at(i)!=nums.at(i+1)){
                ans = nums[i];
                break;
            }
        }
        return ans;

    }
};
