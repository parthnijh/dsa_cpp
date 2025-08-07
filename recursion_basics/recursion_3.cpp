/*question: compute sum of first n elements using recursion*/
/*first way is parameterised way*/
#include <iostream>
using namespace std;
void csum(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    };
    csum(i-1,sum+i);



};
/*when we want a number to be returned*/
int functional(int n){
    if(n==0) return 0;
    return n+functional(n-1);
};

// now we want a factorial function
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    // csum(4,0);
    cout<<functional(4)<<endl;
    cout<<factorial(4);
    return 0;
}