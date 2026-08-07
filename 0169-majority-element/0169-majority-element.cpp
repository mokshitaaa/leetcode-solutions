class Solution {
public:
    int majorityElement(vector<int>& arr) {
        unordered_map <int,int> mp;
        for(int i :arr){
            mp[i]++;
        }
        int max = INT_MIN;
        int element;
        for(pair<int,int> i: mp){
            if(i.second>max){
                max = i.second;
                element = i.first;
            }
        }
        return element;
    }
};