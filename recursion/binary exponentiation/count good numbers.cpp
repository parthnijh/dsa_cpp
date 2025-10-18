class Solution {
public:
    const int M=1e9+7;
    int pow(long long x,long long n){
       
        if(n==0) return 1;
        long long half=pow(x,n/2);
        long long result=(half*half)%M;
        if(n%2==1){
            result=(result*x)%M;
        };
        return result;
    }
    int countGoodNumbers(long long n) {
        return (long long)pow(5,(n+1)/2)*pow(4,n/2)%M;
        
    }
};