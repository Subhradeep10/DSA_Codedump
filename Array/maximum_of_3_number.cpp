class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        int p = nums[0] * nums[1] * nums[2];
        int s = nums[0] * nums[nums.size() - 1] * nums[nums.size() - 2];
        if (p > s)
        {
            return p;
        }
        else
        {
            return s;
        }
    }
};