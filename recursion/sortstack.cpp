class Solution {
  public:
    void insertsorted(stack<int>&st,int num){
        if(st.empty() || !st.empty()&& num>st.top()){
            st.push(num);
            return;
        }
        int n=st.top();
        st.pop();
        insertsorted(st,num);
        st.push(n);
    }
    
    void sortStack(stack<int> &st) {
         if(st.empty()) return;
         int num=st.top();
         st.pop();
         sortStack(st);
         insertsorted(st,num);
        // code here
        
        
    }
};
