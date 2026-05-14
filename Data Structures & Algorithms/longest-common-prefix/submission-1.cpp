class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
         string ans = "";
        int n = s.size();
        for(int i = 0;i<s[0].size();i++){
            for(int j = 0;j<s.size()-1;j++){
                if(s[j][i]!=s[j+1][i] or i>s[j+1].size()) {
                   return ans;
                }
                 
                
            }
            ans+=s[0][i];
             
         

        }
        return ans;

    }
};