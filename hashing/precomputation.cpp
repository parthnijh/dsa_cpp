#include <iostream>
using namespace std;
#include <vector>
int main(){
    int n;
    cout<<"n";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){ 
        cin>>arr[i];
    };
    vector<int> hash(13);
    for(int i=0; i<n; i++){
        hash[arr[i]]++; 
    }
    cout<<"enter size of queries";
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;


    };
    return 0;


}