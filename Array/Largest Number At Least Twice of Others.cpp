class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int maxvalue = 0;
        int secondvalue = 0;
        int maxIndex = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maxvalue)
            {
                secondvalue = maxvalue;
                maxvalue = nums[i];
                maxIndex = i;
            }
            else if (nums[i] < maxvalue && nums[i] > secondvalue)
            {
                secondvalue = nums[i];
            }
        }
        if (maxvalue >= 2 * secondvalue)
        {
            return maxIndex;
        }
        else
        {
            return -1;
        }
    }
};