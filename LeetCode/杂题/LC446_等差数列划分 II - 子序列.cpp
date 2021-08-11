/*
��Ŀ������LeetCode 446

����һ���������� nums ������ nums ������ �Ȳ������� ����Ŀ��
���һ�������� ����������Ԫ�� ������������������Ԫ��֮����ͬ����Ƹ�����Ϊ�Ȳ����С�
���磬[1, 3, 5, 7, 9]��[7, 7, 7, 7] �� [3, -1, -5, -9] ���ǵȲ����С�
�����磬[1, 1, 2, 5, 7] ���ǵȲ����С�
�����е��������Ǵ�������ɾ��һЩԪ�أ�Ҳ���ܲ�ɾ�����õ���һ�����С�
���磬[2,5,10] �� [1,2,1,2,4,1,5,10] ��һ�������С�
��Ŀ���ݱ�֤����һ�� 32-bit ������

���룺nums = [2,4,6,8,10]
�����7
���ͣ����еĵȲ�������Ϊ��
[2,4,6]
[4,6,8]
[6,8,10]
[2,4,6,8]
[4,6,8,10]
[2,4,6,8,10]
[2,6,10]
*/
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size(), res = 0;
        vector<unordered_map<long long, int>> map(n); // ��nums[i]��β�ҹ���Ϊdiff�ĵȲ������е�����
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                auto diff = (long long)nums[i] - nums[j];
                int count = 0;
                if (map[j].count(diff))
                    count = map[j][diff];
                res += count;
                map[i][diff] += ++count;
            }
        }
        return res;
    }
};