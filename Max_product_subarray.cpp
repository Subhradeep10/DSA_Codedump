class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int cur_max, tot_max;
        cur_max = 1;
        tot_max = INT_MIN;
        for (int i = 0; i < nums.size(); ++i)
        {
            cur_max *= nums[i];
            tot_max = max(tot_max, cur_max);
            if (cur_max == 0)
                cur_max = 1;
        }
        cur_max = 1;
        for (int i = nums.size() - 1; i >= 0; --i)
        {
            cur_max *= nums[i];
            tot_max = max(tot_max, cur_max);
            if (cur_max == 0)
                cur_max = 1;
        }
        return tot_max;
    }
};