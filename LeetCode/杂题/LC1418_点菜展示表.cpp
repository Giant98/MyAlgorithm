/*
��Ŀ������LeetCode 1418

����һ������ orders����ʾ�ͻ��ڲ�������ɵĶ�����ȷ�е�˵�� orders[i]=[customerNamei,tableNumberi,foodItemi] ������ customerNamei �ǿͻ���������tableNumberi �ǿͻ����ڲ��������ţ��� foodItemi �ǿͻ���Ĳ�Ʒ���ơ�
���㷵�ظò����� ���չʾ�� �������ű��У����е�һ��Ϊ���⣬���һ��Ϊ�������� ��Table�� ������ÿһ�ж��ǰ���ĸ˳�����еĲ�Ʒ���ơ�������ÿһ���е������ʾÿ�Ų�����������Ӧ��Ʒ��������һ��Ӧ�����Ӧ�����ţ�����������д�µ��Ĳ�Ʒ������
ע�⣺�ͻ��������ǵ��չʾ���һ���֡����⣬���е�������Ӧ�ð����������������С�

���룺orders = [["David","3","Ceviche"],["Corina","10","Beef Burrito"],["David","3","Fried Chicken"],["Carla","5","Water"],["Carla","5","Ceviche"],["Rous","3","Ceviche"]]
�����[["Table","Beef Burrito","Ceviche","Fried Chicken","Water"],["3","0","2","1","0"],["5","0","1","0","1"],["10","1","0","0","0"]]
���ͣ�
���չʾ��������ʾ��
Table,Beef Burrito,Ceviche,Fried Chicken,Water
3    ,0           ,2      ,1            ,0
5    ,0           ,1      ,0            ,1
10   ,1           ,0      ,0            ,0
���ڲ��� 3��David ���� "Ceviche" �� "Fried Chicken"���� Rous ���� "Ceviche"
������ 5��Carla ���� "Water" �� "Ceviche"
���� 10��Corina ���� "Beef Burrito"
*/
class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        set<string> foodList;
        map<int, map<string, int>> tableList;

        for (auto& o : orders) {
            foodList.insert(o[2]);
            tableList[stoi(o[1])][o[2]]++;
        }

        vector<vector<string>> ans;
        vector<string> title = { "Table" };
        for (auto& s : foodList) {
            title.push_back(s);
        }
        ans.push_back(title);
        for (auto& p : tableList) {
            vector<string> t = { to_string(p.first) };
            for (auto& s : foodList) {
                t.push_back(to_string(p.second[s]));
            }
            ans.push_back(t);
        }

        return ans;
    }
};

class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>>ret;
        map<int, vector<string>>m;//�洢���ŵ���Ʒ����ӳ��
        set<string>s;//�洢��Ʒ�����Զ�����ȥ��
        for (int i = 0; i < orders.size(); i++) {//���map����
            m[atoi(orders[i][1].c_str())].push_back(orders[i][2]);
            if (!s.count(orders[i][2])) {
                s.insert(orders[i][2]);
            }
        }
        ret.resize(m.size() + 1);//����ָ��retһά��С��+1����Ϊ��һ��Ϊ����
        ret[0].push_back("Table");
        for (set<string>::iterator it = s.begin(); it != s.end(); it++) {//������
            ret[0].push_back(*it);
        }
        int i = 1;
        for (map<int, vector<string>>::iterator it = m.begin(); it != m.end(); it++) {//��䷵��ֵ
            ret[i].push_back(to_string(it->first));
            for (set<string>::iterator Sit = s.begin(); Sit != s.end(); Sit++) {
                ret[i].push_back(to_string(count(it->second.begin(), it->second.end(), *Sit)));
            }
            i++;
        }
        return ret;
    }
};