class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size();
        while(low < high){
            int mid = low+(high-low)/2;
            if(target > arr[mid])
            low = mid+1;
            else
            high = mid;
        }
        return low;
    }
};