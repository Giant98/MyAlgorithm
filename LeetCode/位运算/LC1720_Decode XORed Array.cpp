/*
��Ŀ������LeetCode 1720

δ֪ �������� arr �� n ���Ǹ�������ɡ�
��������Ϊ����Ϊ n - 1 ����һ���������� encoded ������ encoded[i] = arr[i] XOR arr[i + 1] �����磬arr = [1,0,2,1] �������õ� encoded = [1,2,3] ��
������������� encoded ��ԭ���� arr �ĵ�һ��Ԫ�� first��arr[0]����
����뷵��ԭ���� arr ������֤���𰸴��ڲ�����Ψһ�ġ�

���룺encoded = [1,2,3], first = 1
�����[1,0,2,1]
���ͣ��� arr = [1,0,2,1] ����ô first = 1 �� encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
*/
class Solution {
public:
    vector<int>ans;
    vector<int> decode(vector<int>& encoded, int first) {
        ans.push_back(first);
        for (int i : encoded) {
            first = first ^ i;
            ans.push_back(first);
        }
        return ans;
    }
};
