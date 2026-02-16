class Solution {
public:
    int minBitFlips(int start, int goal) {
        // if(start==0 && goal==0)return 0;
        int number=start^goal;// tells the position of the flip bits
       
        // now just count the set bits in number they need to be flipped
        int ans=0;
        while(number!=0){
            ans+=number&1;
            number=number>>1;
        }
        if(number==1)ans+=1;
        return ans;
    }
};