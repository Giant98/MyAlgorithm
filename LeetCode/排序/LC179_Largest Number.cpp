/*
题目描述：LeetCode 179

给定一组非负整数 nums，重新排列每个数的顺序（每个数不可拆分）使之组成一个最大的整数。
注意：输出结果可能非常大，所以你需要返回一个字符串而不是整数。

输入：nums = [10,2]
输出："210"
*/
class Solution
{
public:
    string largestNumber(vector<int>& nums)
    {
        int n = nums.size();
        if (n == 0)
            return "";
        if (n == 1)
            return to_string(nums[0]);

        vector<string> a;
        for (int x : nums)
            a.push_back(to_string(x));

        sort(a.begin(), a.end(), [&](string a, string b) {return (a + b) > (b + a); });

        string res = "";
        for (string s : a)
            res += s;
        if (res[0] == '0') // [0,0]的情况
            return "0";
        return res;
    }
};
