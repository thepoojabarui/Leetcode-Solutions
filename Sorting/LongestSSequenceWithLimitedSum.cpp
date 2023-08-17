class Solution {
public:
    int solve(vector<int>nums, int target){
        long long int count=0, sum=0;
        for(int i=0;i<nums.size();i++){ 
            if((sum+=nums[i])<=target){ 
                count++;
            }
        }
        return count;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
         vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<queries.size();i++){
            int temp = solve(nums, queries[i]);
            ans.push_back(temp);
        }
        return ans;
    }
};
