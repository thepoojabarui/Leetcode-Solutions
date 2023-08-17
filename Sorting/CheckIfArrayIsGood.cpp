class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int mx = *max_element(nums.begin(),nums.end());
        
        set<int> s(nums.begin(),nums.end());
        bool flag = 1;
        int k = 1;
        
        for(auto x : s){
            if(x == k) k++;
            else{
                flag = 0;
                break;
            }
        }
        
        int ct = count(nums.begin(),nums.end(),mx);
        if(n == mx + 1 && ct == 2 && flag) return 1;
        else return 0;
    }
};