class Solution {
public:
    bool isPalindrome(string s) {
       vector<char> k;
       int i = 0 ;
       while(i<=s.size()){
         if(isalnum(s[i])){
            k.push_back(tolower(s.at(i)));
         }
         i++;
       }
       vector<char> m = k;
       reverse(m.begin(),m.end());
       if(k==m) return true;
       return false;

    }
};
