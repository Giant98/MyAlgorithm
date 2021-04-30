/*
��Ŀ������LeetCode 137

����һ���������� nums ����ĳ��Ԫ�ؽ����� һ�� �⣬����ÿ��Ԫ�ض�ǡ���� ���� �������ҳ��������Ǹ�ֻ������һ�ε�Ԫ�ء�

���룺nums = [2,2,3,2]
�����3
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto [num, occ] : freq) {
            if (occ == 1)
                return num;
        }
        return 0;
    }
};
