class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
         int ans = 0; // Initialize the variable to store the answer
        int n = words.size(); 

        // Iterate over all pairs of strings
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                // Check if i-th string is eaqual to reverse of j-th string
                if (words[i][0] == words[j][1] && words[i][1] == words[j][0]) {
                    ans++; // Increment the count of matching pairs
                }
            }
        }

        return ans; // Return the total number of matching pairs
    }
};