class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size(), col = matrix[0].size(), rl = 0;
        bool c = 0;
        while (rl < row)
        {
            for (int i = 0; i < col; i++)
            {
                if (matrix[rl][i] == target)
                {
                    c = 1;
                    return c;
                }
            }
            rl++;
        }
        return c;
    }
};