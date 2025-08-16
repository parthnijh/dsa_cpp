#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>temp={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    // vector<int>ans;
    // int cat0=0;
    // int cat1=0;
    // int cat2=0;
    // for(int num : temp){
    //     if(num==0) cat0++;
    //     else if(num==1) cat1++;
    //     else cat2++;


    // };

    // for(int i=0; i<cat0; i++){
    //     ans.push_back(0);
    // };

    // for(int i=0; i<cat1; i++){
    //     ans.push_back(1);
    // };
    // for(int i=0; i<cat2; i++){
    //     ans.push_back(2);
    // };

    // for(int num : ans){
    //     cout<<num<<endl;
    // }

    // dutch national algorithm
    /*
    algo idea
    [0... low-1] 0s
    [low ... mid-1] 1s
    [mid....high] unsorted
    [high+1 .. n-1]2s

    if a[mid]==0 swap(a[mid,a[low]]) 
    if a[mid]==1 mid++ as now its alr sorted so we shrink the unsorted space by moving mid ahead
    if a[mid]==2 swap(a[mid],a[high]) high-- as now we have sorted the portion high,n-1 and mid - high-1 remains unsorted
    
    */
   int mid=0;
   int high=temp.size()-1;
   int low=0;
   while(mid<=high){
    if(temp[mid]==0){
        swap(temp[mid],temp[low]);
        low++;
        mid++;
    }

    else if(temp[mid]==1){
        mid++;
    }

    else{
        swap(temp[high],temp[mid]);
        high--;
    };
   };

   for(int num :temp){
    cout<<num<<endl;
   }


}
