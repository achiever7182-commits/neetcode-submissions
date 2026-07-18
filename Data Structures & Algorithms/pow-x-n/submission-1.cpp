class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        double k = x;
        double ans = x;
       if(n>=0){
         for(int i = 1 ;i<n ;i++){
            ans = ans*k;
        }
       }
       else{
        ans = 1/x;
        n = -n;
        k = 1/k;
         for(int i = 1 ;i<n ;i++){
            ans = ans*k;
        }
       }
        return ans;
    }
};
