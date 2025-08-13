#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr={0, 0, 0, 1, 3, -2};
    int j=-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    };
    // if(j==-1) return ;
    for(int i=j+1; i<arr.size(); i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        };
    };

    for(int num : arr){
        cout<<num<<endl;
    }
    
    return 0;
    

}
/*
    [1,0,2,3,2,0,0,4,5,1]
    j=1
    i=2
 */