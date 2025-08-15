#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int main(){
    vector<int>a={1,2,3,1,1,1,1};
    unordered_map<int,int>prefixS;
    int k=3;
    int maxLen=0;
    int sum=0;
    
    for(int i=0; i<a.size(); i++){
        sum+=a[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);

        };
        int rem=sum-k;
        if(prefixS.find(rem)!=prefixS.end()){
            int len=i-prefixS[rem];
            maxLen=max(maxLen,len);

        }

        if(prefixS.find(sum)==prefixS.end()){
            prefixS[sum]=i;
        };


    };
    cout<<maxLen;
}