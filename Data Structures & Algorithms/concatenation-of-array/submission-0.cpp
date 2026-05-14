class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(2*n,0);
        for(int i = 0 ;i<2*n;i++){
            if(i<n){
                v.at(i) = nums[i];
            }
            else {
                v.at(i) = nums[i-n];
            }
        }
        return v;
    }
};