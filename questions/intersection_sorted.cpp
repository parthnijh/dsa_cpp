#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>a={1,2,2,3,3,4,5,6};
    vector<int>b={2,3,3,5,6,6,7};
    int up=0;
    int down=0;
    
    vector<int>temp;
    while(up<a.size() && down<b.size()){
        if(a[up]<b[down]) up++;
        else if(b[down]<a[up]) down++;
        else{
            temp.push_back(a[up]);
            up++;
            down++;
        };
    };

    for(int num : temp){
        cout<<num<<endl;
    };
   

}