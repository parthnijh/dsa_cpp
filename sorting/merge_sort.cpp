#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr,int low,int high,int mid){
    vector<int>temp={};
    
    
    int left=low;
    int right=mid+1;
    while(left<=mid && right <=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        };

    };

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;

    };

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    };

    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    };
}
void mergesort(vector<int> &arr,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high,mid);


};

void ms(vector <int> &arr,int n){
    mergesort(arr,0,n-1);
}
int main(){
    vector<int>arr={2,1,11,7,0};
    int n=arr.size();
    // ms(arr,n);
    mergesort(arr,0,n-1);
    for(int num : arr){
        cout<<num<<endl;

    };

    return 0;


}
//best average and worst case => O(n*log base2 n)