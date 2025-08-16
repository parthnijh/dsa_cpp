#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
// sol for both positive and  for negative values
// int main(){
//     vector<int>a={1,2,3,1,1,1,1};
//     unordered_map<int,int>prefixS;
//     int k=3;
//     int maxLen=0;
//     int sum=0;
    
//     for(int i=0; i<a.size(); i++){
//         sum+=a[i];
//         if(sum==k){
//             maxLen=max(maxLen,i+1);

//         };
//         int rem=sum-k;
//         if(prefixS.find(rem)!=prefixS.end()){
//             int len=i-prefixS[rem];
//             maxLen=max(maxLen,len);

//         }

//         if(prefixS.find(sum)==prefixS.end()){
//             prefixS[sum]=i;
//         };


//     };
//     cout<<maxLen;
// }

// optimal sol for positve and 0s
// int main(){
//     int left=0;
//     int right=0;
//     int sum=0;
//     int maxLen=0;
//     vector<int>a={1,2,3,1,1,1,1};
//     int k=3;
//     while(right<a.size()){

//         while(left<=right && sum>k){
//             sum-=a[left];
//             left++;
//         };
        
//         if(sum==k){
//             maxLen=max(maxLen,right-left+1);
//         };
//         right++;

//         if(right<a.size()){
//             sum+=a[right];
//         };


//     }

// }