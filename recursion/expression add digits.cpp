class Solution {
public:
    vector<string>ans;
    
    vector<string> addOperators(string num, int target) {
        helper(num,target,0,"",0,0);
        return ans;
    };
    void helper(string num,int target,int i,const string &path,long eval,long residual){
        if(i==num.size()){
            if(eval==target){
                ans.push_back(path);
                return;
            };
        };
        string currStr;
        long number=0;
        for(int j=i; j<num.length(); j++){
            if(j>i && num[i]=='0')return;
            currStr+=num[j];
            number=number*10+(num[j]-'0');
            if(i==0){
                helper(num,target,j+1,path+currStr,number,number);
            }
            else{
                helper(num,target,j+1,path+"+"+currStr,eval+number,number);
                helper(num,target,j+1,path+"-"+currStr,eval-number,-number);
                helper(num,target,j+1,path+"*"+currStr,eval-residual+residual*number,residual*number);

            };

        }
    };
};