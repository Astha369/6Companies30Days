class Solution
{
public:
    int maxRotateFunction(vector<int> &nums)
    {
        int i, j;
        long maxi = 0;
        long s = 0;
        long son = 0;
        for (i = 0; i < nums.size(); i++)
        {
            s += i * nums[i];
            son += nums[i];
        }
        maxi = s;
        int n = nums.size();
        for (i = n - 1; i >= 0; i--)
        {
            s += son - (n * nums[i]);
            maxi = max(maxi, s);
        }
        return maxi;
    }
};