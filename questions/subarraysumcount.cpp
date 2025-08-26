class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int count=0;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            int rem=sum-k; // n-k
            count+=mpp[rem];//check if n-k exists if it does then check the frequency
            mpp[sum]+=1;//update the frequence of the prefix sum


        };

        return count;
        
    }
};