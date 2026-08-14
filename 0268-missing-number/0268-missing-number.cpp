class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        for(int i =0; i<n; i++){
            while(arr[i]>=0 && arr[i]<n && arr[arr[i]] != arr[i]){
                swap(arr[i], arr[arr[i]]);
            }
        }

        for(int i=0; i<n; i++){
            if(arr[i] != i)
            return i;
        }
        return n;
    }
};