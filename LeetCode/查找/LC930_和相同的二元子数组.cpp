/*
��Ŀ������LeetCode 930

����һ����Ԫ���� nums ����һ������ goal ������ͳ�Ʋ������ж��ٸ���Ϊ goal �� �ǿ� �����顣
������ �������һ���������֡�

���룺nums = [1,0,1,0,1], goal = 2
�����4
���ͣ�
�����������ʾ���� 4 ��������ĿҪ��������飺
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
*/
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int>hash;
        hash[0]++;
        int sum = 0, num = 0;
        for (int i : nums) {
            num += i;
            if (hash[num - goal])
                sum += hash[num - goal];
            hash[num]++;
        }
        return sum;
    }
};