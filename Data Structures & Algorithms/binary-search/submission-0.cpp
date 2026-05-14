class Solution {
public:
    int search(vector<int>& nums, int target) {
         int n = nums.size();
        int i = 0;
        int j = n-1;
        int idx = -1;
        bool flag = false;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums.at(mid)==target){
                flag = true;
                idx = mid; break;
            }
            else if(nums.at(mid)<target){
            i = mid+1;
            }
            else {
                j = mid-1;
            }
        }
        if(flag == true){
            return idx;
        }
        else return -1;
    }
};
