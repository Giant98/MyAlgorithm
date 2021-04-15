/*
��Ŀ������LeetCode 213

����һ��רҵ��С͵���ƻ�͵���ؽֵķ��ݣ�ÿ�䷿�ڶ�����һ�����ֽ�����ط����еķ��ݶ� Χ��һȦ ������ζ�ŵ�һ�����ݺ����һ�������ǽ����ŵġ�ͬʱ�����ڵķ���װ���໥��ͨ�ķ���ϵͳ������������ڵķ�����ͬһ���ϱ�С͵���룬ϵͳ���Զ����� ��
����һ������ÿ�����ݴ�Ž��ķǸ��������飬������ �ڲ���������װ�õ������ ���ܹ�͵�Ե�����߽�

���룺nums = [2,3,2]
�����3
���ͣ��㲻����͵�� 1 �ŷ��ݣ���� = 2����Ȼ��͵�� 3 �ŷ��ݣ���� = 2��, ��Ϊ���������ڵġ�
 */
class Solution {
public:
    int rob(vector<int>& nums) { // ��̬�滮
        if (nums.size() == 0) return 0; // �ر��ж�
        if (nums.size() == 1) return nums[0];
        // �������ۣ��������
        int result1 = robRange(nums, 0, nums.size() - 2); // 1.��ͷȥβ
        int result2 = robRange(nums, 1, nums.size() - 1); // 2.��βȥͷ
        return max(result1, result2); // ��������������������ֵ����
    }
    // ����Ĵ����LC198��ҽ�����߼���ͬ
    int robRange(vector<int>& nums, int start, int end) {
        if (start == end)return nums[start];
        int first = nums[start];
        int second = max(nums[start], nums[start + 1]);
        for (int i = start + 2; i <= end; i++) {
            int temp = second;
            second = max(first + nums[i], second);
            first = temp;
        }
        return second;
    }
};