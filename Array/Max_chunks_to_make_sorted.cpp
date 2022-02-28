class Solution
{
public:
    int maxChunksToSorted(vector<int> &arr)
    {
        int ans = 0, max_so_far = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            max_so_far = max(max_so_far, arr[i]);
            if (max_so_far == i)
                ans++;
        }
        return ans;
    }
};