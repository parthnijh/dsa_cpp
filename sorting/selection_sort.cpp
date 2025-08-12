
#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,12,4,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<=n-2; i++){
        int min=i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[min]){
                swap(arr[j],arr[min]);
                
            };

        };
    };

    for(int num : arr){
        cout<<num<<endl;
    }

}