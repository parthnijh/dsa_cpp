#include <iostream>
using namespace std;
int main(){
    int arr[5]={12,2,56,34,5};
    int arr1[5]={1,2,3,4,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=n-1; i>=1; i--){
        int didSwap=0;
        for(int j=0; j<=i-1; j++){
            if(arr1[j]>arr1[j+1]){
                swap(arr1[j],arr1[j+1]);
                didSwap=1;
                cout<<"swapped";
            };
        }
        if(didSwap==0){
            break;
        }
    };

    for(int i=0; i<n; i++){
        cout<<arr1[i]<<endl;
    }
}

// best time complexity of bubble sort is big of n when the array is already sorted