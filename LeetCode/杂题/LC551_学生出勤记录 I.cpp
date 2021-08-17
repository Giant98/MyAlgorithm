/*
��Ŀ������LeetCode 551

����һ���ַ��� s ��ʾһ��ѧ���ĳ��ڼ�¼�����е�ÿ���ַ�������ǵ���ĳ��������ȱ�ڡ��ٵ�������������¼��ֻ�����������ַ���

'A'��Absent��ȱ��
'L'��Late���ٵ�
'P'��Present������
���ѧ���ܹ� ͬʱ ����������������������Ի�ó��ڽ�����

�� �ܳ��� �ƣ�ѧ��ȱ�ڣ�'A'���ϸ� �������졣
ѧ�� ���� ���� ���� 3 ��� 3 �����ϵĳٵ���'L'����¼��
���ѧ�����Ի�ó��ڽ��������� true �����򣬷��� false ��

���룺s = "PPALLP"
�����true
���ͣ�ѧ��ȱ�ڴ������� 2 �Σ��Ҳ����� 3 ������ϵ������ٵ���¼��
*/
class Solution {
public:
    bool checkRecord(string s) {
        int numA = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                numA++;
                if (numA > 1)return false;
            }
            if (s[i] == 'L') {
                int num = 1;
                i++;
                while (s[i] == 'L') {
                    num++;
                    i++;
                }
                if (num > 2)return false;
                i--;
            }
        }
        return true;
    }
};