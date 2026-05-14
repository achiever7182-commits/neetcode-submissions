class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(2*n);
        
        for(int i = 0 ;i<(2*n);i++){
            if(i<n){
                v[i] = nums[i];
            }
            else {
                v[i] = nums[i-n];
            }
        }
        return v;
    }
};