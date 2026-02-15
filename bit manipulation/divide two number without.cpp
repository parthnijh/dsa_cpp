class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor)return 1;
        bool sign=true;//pos or neg
        if(dividend<0 && divisor>0)sign=false;// negative cases
        else if(divisor<0 && dividend>=0)sign=false;
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long quotient=0;
        while(n>=d){
            long cnt=0;//determibe count of 2 i need to minus
            while(n>=(d<<(cnt+1))){
                cnt+=1;
            }
            quotient+=1<<cnt; //store the power
            n-=(d<<cnt);
        };
        if(quotient==(1<<31)&& sign)return INT_MAX;
        if(quotient==(1<<31)&& !sign)return INT_MIN;
        return sign ? quotient : -quotient;

        
    }
};