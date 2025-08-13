#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr1={1,1,2,3,4,5};
    vector<int>arr2={2,3,4,4,5,6};
    vector<int>ans;
    int up=0;
    int down=0;
   
    while(up<arr1.size() && down<arr2.size()){
        if(arr1[up]<=arr2[down]){
            if(ans.size()==0 || ans.back()!=arr1[up]){
                ans.push_back(arr1[up]);
            };
            up++;
        }
        
        else{
            if(ans.size()==0 || ans.back()!=arr2[down]){
                ans.push_back(arr2[down]);

            };
            down++;

        }

    };

    while(up<arr1.size()){
        if(ans.size()==0||arr1[up]!=ans.back()){
            ans.push_back(arr1[up]);
        };
        up++;
         
    };

    while(down<arr2.size()){
        if(ans.size()==0||arr2[down]!=ans.back()){
            ans.push_back(arr2[down]);
        };
        down++;
        

        

    };

    for(int nums : ans){
        cout<<nums<<endl;
    }
}