/*Highest Occurring Element in an Array
Given an array of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times.
If there are multiple elements that appear a maximum number of times, find the smallest of them.
Please note that this section might seem a bit difficult without prior knowledge on what hashing is,
we will soon try to add basics concepts for your ease!
If you know the concepts already please go ahead to give a shot to the problem. Cheers!*/

#include <iostream>
using namespace std;

#include <vector>
#include <unordered_map>

int max_freq(vector<int> nums){
    int n=nums.size();
    int max=0;
    // cout<<max;
    int number;
    unordered_map<int,int>mpp;
    for(int i=0; i<n; i++){
        mpp[nums[i]]++;
    };
   


    for(auto pair : mpp){
        if(max<pair.second){
            max=pair.second;
            number=pair.first;
        };
    };
    
    return number;
};
int main(){
    vector<int>arr={1,2,2,4,4,4};
    vector<int>arr1={4, 4, 5, 5, 6};
    cout<<max_freq(arr)<<endl;
    cout<<max_freq(arr1);
}