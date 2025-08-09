#include <iostream>
#include <vector>
using namespace std;
#include<map>
int main(){
    int n;
    cout<<"size";
    cin>>n;
    vector<int> arr(n);
    map<int,int>mpp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    };

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;

    };

    int q;
    cout<<"queries";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;

    };
    
    return 0;


}