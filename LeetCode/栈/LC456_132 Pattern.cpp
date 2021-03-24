/*
��Ŀ������LeetCode 456

����һ���������У�a1, a2, ..., an��һ��132ģʽ�������� ai, aj, ak ������Ϊ���� i < j < k ʱ��ai < ak < aj�����һ���㷨���������� n �����ֵ�����ʱ����֤����������Ƿ���132ģʽ�������С�
ע�⣺n ��ֵС��15000��

����: [1, 2, 3, 4]
���: False

����: �����в�����132ģʽ�������С�
*/
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int two = INT_MIN;
        stack<int>s;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < two)return true;
            while (!s.empty() && nums[s.top()] < nums[i]) {
                two = nums[s.top()];
                s.pop();
            }
            s.push(i);
        }
        return false;
    }
};