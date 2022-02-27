class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        long long int sum = 0;
        long long int max = arr[0];
        int j = 0;
        while (j < n)
        {
            sum += arr[j];
            if (sum > max)
            {
                max = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
            j++;
        }
        return max;
    }
};