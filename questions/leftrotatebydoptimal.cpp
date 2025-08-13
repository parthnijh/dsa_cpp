// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
   vector<int>nums={-1, 0, 3, 6};
   int k=2;
   reverse(nums.begin(),nums.begin()+k);
   reverse(nums.begin()+k,nums.end());
   reverse(nums.begin(),nums.end());

    

   
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

//tc o(n)
//spc o(1)