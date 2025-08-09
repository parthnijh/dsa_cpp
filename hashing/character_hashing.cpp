#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main(){
    string s="abcdegfgaAABB";
    vector<int>hash(256);

    for(char c : s){
        hash[c-'a']++;



    };
    int q;
    cout<<"enter q";
    cin>>q;
    while(q--){
        char c;
        cout<<"char";
        cin>>c;
        cout<<hash[c-'a'];
    };

    return 0;

}