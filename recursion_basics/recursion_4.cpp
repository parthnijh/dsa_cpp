// reverse an array,check if a string is a palindrome or not
#include <iostream>
#include <string>
using namespace std;
void reversearr(int arr[],int left,int right){
    if(left>=right) return;
    swap(arr[left],arr[right]);
    reversearr(arr,left+1,right-1);


};

void onepointer(int arr[],int i,int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    onepointer(arr,i+1,n);
}


//check if a string is a palindrome
bool palindrome(string s,int i,int n){
    if(i==n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return palindrome(s,i+1,n);

}
int main(){
    int arr[4]={2,5,4,1};
    int arr1[4]={5,7,9,8};
    int n = sizeof(arr) / sizeof(arr[0])-1; 
    string s="MADAM";
    int n1=s.size();
    reversearr(arr,0,n);
    for(int item : arr){
        cout<<item<<endl;
    };
    onepointer(arr1,0,n+1);
    for (int item : arr1){
        cout<<item<<endl;
    };
    cout<<palindrome(s,0,n1);
    

    return 0;
}