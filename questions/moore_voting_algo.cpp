#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int>a={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int counter=0;
    int el=0;
    for(int i=0; i<a.size(); i++){
        if(counter==0){
            el=a[i];

        }
        if(el==a[i]){
            counter++;
        }
        else{
            counter--;
        };
    }
    int counter1=0;
    for(int i=0; i<a.size(); i++){
        if(el==a[i]) counter1++;
    };
    int n=a.size();
    if(counter1>n/2){
        cout<< el;
    }
    else{
        cout<<-1;
    }


}