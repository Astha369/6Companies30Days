class Solution
{
private:
    void recursive(int in, int s, int n, vector<vector<int>> &a1, vector<int> &a2, int k)
    {
        if (s > n)
            return;
        else if (s == n && k == 0)
        {
            a1.push_back(a2);
            return;
        }

        for (int i = in; i <= 9; i++)
        {
            if (i > n)
                break;
            a2.push_back(i);
            recursive(i + 1, s + i, n, a1, a2, k - 1);
            a2.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> a2;
        vector<int> a1;
        recursive(1, 0, n, a2, a1, k);
        return a2;
    }
};