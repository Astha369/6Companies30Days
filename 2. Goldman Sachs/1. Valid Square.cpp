class Solution
{
public:
    bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
    {
        int a1, a2, a3, a4, ad1, ad2;
        a1 = pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2);
        a2 = pow(p2[0] - p3[0], 2) + pow(p3[1] - p2[1], 2);
        a3 = pow(p3[0] - p4[0], 2) + pow(p3[1] - p4[1], 2);
        a4 = pow(p1[0] - p4[0], 2) + pow(p1[1] - p4[1], 2);
        ad1 = pow(p2[0] - p4[0], 2) + pow(p2[1] - p4[1], 2);
        ad2 = pow(p1[0] - p3[0], 2) + pow(p1[1] - p3[1], 2);
        unordered_set<int> s;
        s.insert({a1, a2, a3, a4, ad1, ad2});
        return (!s.count(0) && s.size() == 2);
    }
};