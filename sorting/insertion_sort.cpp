#include <iostream>
using namespace std;
int main(){
    int arr[5]={12,3,7,22,11};
    //3,12
    //3,7,12
    int n=sizeof(arr)/sizeof(arr[0]);
    int counter=1;
    for(int i=1; i<n; i++){
        int j=i;
        
    
        while(j>0){

            counter++;
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;

            }
            else{
                break;
            }
            
            

            
        };
    };

    cout<<counter<<endl;


    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
//worst case big og n2 and best case big o of n complexity