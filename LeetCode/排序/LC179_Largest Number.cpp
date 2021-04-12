/*
��Ŀ������LeetCode 179

����һ��Ǹ����� nums����������ÿ������˳��ÿ�������ɲ�֣�ʹ֮���һ������������
ע�⣺���������ܷǳ�����������Ҫ����һ���ַ���������������

���룺nums = [10,2]
�����"210"
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
        if (res[0] == '0') // [0,0]�����
            return "0";
        return res;
    }
};
