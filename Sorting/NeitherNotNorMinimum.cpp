class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        for(auto num: nums){
            if(num!=mx && num!=mn) return num;
        }
        return -1;
    }
}