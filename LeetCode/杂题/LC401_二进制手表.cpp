/*
��Ŀ������LeetCode 401

�������ֱ����� 4 �� LED ���� Сʱ��0-11�����ײ��� 6 �� LED ���� ���ӣ�0-59����ÿ�� LED ����һ�� 0 �� 1�����λ���Ҳࡣ
����һ������ turnedOn ����ʾ��ǰ���ŵ� LED �����������ض������ֱ���Ա�ʾ�����п���ʱ�䡣����� ������˳�� ���ش𰸡�
Сʱ�������㿪ͷ��
���磬"01:00" ����Ч��ʱ�䣬��ȷ��д��Ӧ���� "1:00" ��
���ӱ�������λ����ɣ����ܻ����㿪ͷ��
���磬"10:2" ����Ч��ʱ�䣬��ȷ��д��Ӧ���� "10:02" ��

���룺turnedOn = 1
�����["0:01","0:02","0:04","0:08","0:16","0:32","1:00","2:00","4:00","8:00"]
*/
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for (int h = 0; h < 12; ++h) {
            for (int m = 0; m < 60; ++m) {
                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
                    ans.push_back(to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m));
                }
            }
        }
        return ans;
    }
};
