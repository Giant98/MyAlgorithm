/*
��Ŀ������LeetCode 1818

������������������ nums1 �� nums2 ������ĳ��ȶ��� n ��
���� nums1 �� nums2 �� ���Բ�ֵ�� ����Ϊ���� |nums1[i] - nums2[i]|��0 <= i < n���� �ܺͣ��±�� 0 ��ʼ����
�����ѡ�� nums1 �е� ����һ�� Ԫ�����滻 nums1 �е� ���� һ��Ԫ�أ��� ��С�� ���Բ�ֵ�͡�
���滻���� nums1 �����һ��Ԫ�� ֮�� ��������С���Բ�ֵ�͡���Ϊ�𰸿��ܴܺ�������Ҫ�� 109 + 7 ȡ�� �󷵻ء�

|x| ����Ϊ��
��� x >= 0 ��ֵΪ x ������
��� x <= 0 ��ֵΪ -x

���룺nums1 = [1,7,5], nums2 = [2,3,5]
�����3
���ͣ������ֿ��ܵ����ŷ�����
- ���ڶ���Ԫ���滻Ϊ��һ��Ԫ�أ�[1,7,5] => [1,1,5] ������
- ���ڶ���Ԫ���滻Ϊ������Ԫ�أ�[1,7,5] => [1,5,5]
���ַ����ľ��Բ�ֵ�Ͷ��� |1-2| + (|1-3| ���� |5-3|) + |5-5| = 3
*/
class Solution {
public:
    static constexpr int mod = 1'000'000'007;

    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        vector<int> rec(nums1);
        sort(rec.begin(), rec.end());
        int sum = 0, maxn = 0;
        int n = nums1.size();
        for (int i = 0; i < n; i++) {
            int diff = abs(nums1[i] - nums2[i]);
            sum = (sum + diff) % mod;
            int j = lower_bound(rec.begin(), rec.end(), nums2[i]) - rec.begin();
            if (j < n) {
                maxn = max(maxn, diff - (rec[j] - nums2[i]));
            }
            if (j > 0) {
                maxn = max(maxn, diff - (nums2[i] - rec[j - 1]));
            }
        }
        return (sum - maxn + mod) % mod;
    }
};