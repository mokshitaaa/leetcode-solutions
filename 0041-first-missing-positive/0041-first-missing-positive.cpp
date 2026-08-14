class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n = arr.size();
        set<int> st;
        for(int i:arr){
            st.insert(i);
        }
        for(int i =1; i<=n; i++){
            if(st.find(i) == st.end()){
                return i;
            }

        }
         return n+1;
    }
};