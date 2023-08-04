class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> compliments;

        compliments.insert({nums[0],0});

        for (int i = 1; i < nums.size(); ++i) {
            int compliment = target - nums[i];

            if (compliments.contains(compliment)) {
                return {i, compliments[compliment]};
            }

            compliments.insert({nums[i], i});
        }

        // no match ever found :(
        return {};
    }
};