class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n==2){
            if(nums.at(0)==nums.at(1)){
                return true;
                
            }
        }
        for(int i = 1;i<n-1;i++){
            if(nums.at(i)==nums.at(i-1) or nums.at(i)==nums.at(i+1)){
                return true;
                break;
            }
        }
        return false;
    }
};