/*
��Ŀ������LeetCode 218

���е�������Ǵ�Զ���ۿ��ó��������н������γɵ��������ⲿ�������������н������λ�ú͸߶ȣ��뷵������Щ�������γɵ� ����� ��
ÿ��������ļ�����Ϣ������ buildings ��ʾ��������Ԫ�� buildings[i] = [lefti, righti, heighti] ��ʾ��

lefti �ǵ� i �����������Ե�� x ���ꡣ
righti �ǵ� i ���������ұ�Ե�� x ���ꡣ
heighti �ǵ� i ��������ĸ߶ȡ�
����� Ӧ�ñ�ʾΪ�� ���ؼ��㡱 ��ɵ��б���ʽ [[x1,y1],[x2,y2],...] ������ x ���� ���� ���� ���ؼ�����ˮƽ�߶ε���˵㡣�б������һ���������Ҳཨ������յ㣬y ����ʼ��Ϊ 0 �������ڱ������ߵ��յ㡣���⣬�κ��������ڽ�����֮��ĵ��涼Ӧ����Ϊ�����������һ���֡�

ע�⣺���������в�������������ͬ�߶ȵ�ˮƽ�ߡ����� [...[2 3], [4 5], [7 5], [11 5], [12 7]...] �ǲ���ȷ�Ĵ𰸣������߶�Ϊ 5 ����Ӧ������������кϲ�Ϊһ����[...[2 3], [4 5], [12 7], ...]

���룺buildings = [[2,9,10],[3,7,15],[5,12,12],[15,20,10],[19,24,8]]
�����[[2,10],[3,15],[7,12],[12,0],[15,10],[20,8],[24,0]]
���ͣ�
ͼ A ��ʾ��������н������λ�ú͸߶ȣ�
ͼ B ��ʾ����Щ�������γɵ�����ߡ�ͼ B �еĺ���ʾ����б��еĹؼ��㡣
*/
class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        multiset<pair<int, int>> all;
        vector<vector<int>> res;

        for (auto& e : buildings) {
            all.insert(make_pair(e[0], -e[2])); // critical point, left corner
            all.insert(make_pair(e[1], e[2])); // critical point, right corner
        }

        multiset<int> heights({ 0 }); // ���浱ǰλ�����и߶ȡ�
        vector<int> last = { 0, 0 }; // ������һ��λ�õĺ������Լ��߶�
        for (auto& p : all) {
            if (p.second < 0) heights.insert(-p.second); // ��˵㣬�߶����
            else heights.erase(heights.find(p.second)); // �Ҷ˵㣬�Ƴ��߶�

            // ��ǰ�ؼ��㣬���߶�
            auto maxHeight = *heights.rbegin();

            // ��ǰ���߶������ͬ����һ���߶ȣ�˵������һ��ת�۵�
            if (last[1] != maxHeight) {
                // ���� last������������
                last[0] = p.first;
                last[1] = maxHeight;
                res.push_back(last);
            }
        }

        return res;
    }
};
