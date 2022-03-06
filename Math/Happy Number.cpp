class Solution
{
public:
    bool isHappy(int n)
    {
        std::vector<int> vec;
        int sum = 0;
        while (sum != 1)
        {
            sum = 0;
            while (n)
            {
                sum += std::pow(n % 10, 2);
                n /= 10;
            }
            if (std::find(vec.begin(), vec.end(), sum) != vec.end())
                return false;
            vec.push_back(sum);
            n = sum;
        }
        return true;
    }
};