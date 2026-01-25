class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        int newn=n-1;
        return ((newn&n)==0);
        
    }
};