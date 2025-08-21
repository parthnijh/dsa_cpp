// equal number of positives and negatives
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int pos=0;
//         int neg=1;
//         int n=nums.size();
//         vector<int>ans(n,0);
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]<0){
//                 ans[neg]=nums[i];
//                 neg+=2;
//             }
//             else{
//                 ans[pos]=nums[i];
//                 pos+=2;
//             };
//         };

//         return ans;
        
//     }
// };

//case 2
// vector<int>pos={};
// vector<int>neg={};
// for(int num : nums){
//     if(num<0) neg.push_back(num);
//     else pos.push_back(num);



// }

// if(pos.size()>neg.size()){
//     for(int i=0; i<neg.size(); i++){

//         ans[2*i]=pos[i];
//         ans[2*i+1]=neg[i];
//     }
// }