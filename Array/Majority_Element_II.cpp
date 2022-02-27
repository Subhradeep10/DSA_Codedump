class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        unordered_map<int, int>::iterator it;
        for (it = mp.begin(); it != mp.end(); ++it)
        {
            if (it->second > (nums.size() / 3))
                v.push_back(it->first);
        }
        return v;
    }
};