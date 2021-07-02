/*
��Ŀ������LeetCode 1833

�������ף�С�к� Tony ����һЩѩ�������
�̵����µ� n ֧ѩ�⣬�ó���Ϊ n ������ costs ��ʾѩ��Ķ��ۣ����� costs[i] ��ʾ�� i ֧ѩ����ֽ�۸�Tony һ���� coins �ֽ�����������ѣ�����Ҫ�򾡿��ܶ��ѩ�⡣
����۸����� costs ���ֽ��� coins ��������㲢���� Tony �� coins �ֽ��ܹ��򵽵�ѩ��� ������� ��
ע�⣺Tony ���԰�����˳����ѩ�⡣

���룺costs = [1,3,2,4,1], coins = 7
�����4
���ͣ�Tony �������±�Ϊ 0��1��2��4 ��ѩ�⣬�ܼ�Ϊ 1 + 3 + 2 + 1 = 7
*/
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ans = 0;
        for (int cost : costs) {
            if (cost <= coins) {
                ans++;
                coins -= cost;
            }
            else
                break;
        }
        return ans;
    }
};
