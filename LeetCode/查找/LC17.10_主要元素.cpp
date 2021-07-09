/*
��Ŀ������LeetCode 17.10

������ռ�ȳ���һ���Ԫ�س�֮Ϊ��ҪԪ�ء�����һ�� ���� ���飬�ҳ����е���ҪԪ�ء���û�У����� -1 �������ʱ�临�Ӷ�Ϊ O(N) ���ռ临�Ӷ�Ϊ O(1) �Ľ��������

���룺[1,2,5,9,5,9,5,5,5]
�����5
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int flag = 0;
        int flagnum = -1;
        for (int num : nums) {
            if (flag == 0) {
                flagnum = num;
                flag = 1;
            }
            else {
                if (flagnum == num)
                    flag++;
                else
                    flag--;
            }
        }
        if (!flag)
            return -1;
        else {
            int sum = 0;
            for (int num : nums) {
                if (num == flagnum)
                    sum++;
            }
            if (sum > nums.size() / 2)
                return flagnum;
            else
                return -1;
        }
    }
};