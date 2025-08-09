// re-5 multipele recursion calls
# include<iostream>
using namespace std;
int fibonacci(int n){
    if (n<=1) return n;
    return fibonacci(n-1)+ fibonacci(n-2);

};


int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<fibonacci(n);
}
//tc of such code is 2^n as everytime two functions are called