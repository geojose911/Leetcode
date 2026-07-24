class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        std::unordered_set<int> unique_nums(nums.begin(), nums.end());
        std::unordered_set<int> current_xors = {0};
        for (int round = 0; round < 3; ++round) {
            std::unordered_set<int> next_xors;
            for (int val : current_xors) {
                for (int x : unique_nums) {
                    next_xors.insert(val ^ x);
                }
            }
            current_xors = std::move(next_xors);
        }
        return current_xors.size();
    }
};