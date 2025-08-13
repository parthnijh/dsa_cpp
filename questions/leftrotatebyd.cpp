// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
   vector<int>nums={-1, 0, 3, 6};
   int k=2;
//   for(int i=0; i<nums.size()-d; i++){
//       swap(nums[i],nums[i+d]);
//     };
    
    vector<int> temp;
    for(int i=0; i<k; i++){
        temp.push_back(nums[i]);
    };

    for(int i=k; i<nums.size(); i++){
        nums[i-k]=nums[i];
    };

    for(int i=nums.size()-k; i<nums.size(); i++){
        nums[i]=temp[i-(nums.size()-k)];
    };
    // int temp=nums[0];
    // for(int i=1; i<nums.size(); i++){
    //     nums[i-1]=nums[i];

    // };
    // nums.pop_back();

    // nums.push_back(temp);


        

   
   for(int i=0; i<nums.size(); i++){
       cout<<nums[i]<<endl;
   }
   
   
   
   
   // 2,1,3,4,5
   // 2,3,1,4,5
   //2,3,4,1,5
   // 1 2 3 4 5
   /* 
   12354
   12534
   15234
   51234
   12345
   21345
   23145
   23415
   
   */

    return 0;
}
//tc on
//spc o(k)