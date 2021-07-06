/*
题目描述：LeetCode 1418

给你一个数组 orders，表示客户在餐厅中完成的订单，确切地说， orders[i]=[customerNamei,tableNumberi,foodItemi] ，其中 customerNamei 是客户的姓名，tableNumberi 是客户所在餐桌的桌号，而 foodItemi 是客户点的餐品名称。
请你返回该餐厅的 点菜展示表 。在这张表中，表中第一行为标题，其第一列为餐桌桌号 “Table” ，后面每一列都是按字母顺序排列的餐品名称。接下来每一行中的项则表示每张餐桌订购的相应餐品数量，第一列应当填对应的桌号，后面依次填写下单的餐品数量。
注意：客户姓名不是点菜展示表的一部分。此外，表中的数据行应该按餐桌桌号升序排列。

输入：orders = [["David","3","Ceviche"],["Corina","10","Beef Burrito"],["David","3","Fried Chicken"],["Carla","5","Water"],["Carla","5","Ceviche"],["Rous","3","Ceviche"]]
输出：[["Table","Beef Burrito","Ceviche","Fried Chicken","Water"],["3","0","2","1","0"],["5","0","1","0","1"],["10","1","0","0","0"]]
解释：
点菜展示表如下所示：
Table,Beef Burrito,Ceviche,Fried Chicken,Water
3    ,0           ,2      ,1            ,0
5    ,0           ,1      ,0            ,1
10   ,1           ,0      ,0            ,0
对于餐桌 3：David 点了 "Ceviche" 和 "Fried Chicken"，而 Rous 点了 "Ceviche"
而餐桌 5：Carla 点了 "Water" 和 "Ceviche"
餐桌 10：Corina 点了 "Beef Burrito"
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
        map<int, vector<string>>m;//存储桌号到菜品名的映射
        set<string>s;//存储菜品名，自动排序去重
        for (int i = 0; i < orders.size(); i++) {//填充map容器
            m[atoi(orders[i][1].c_str())].push_back(orders[i][2]);
            if (!s.count(orders[i][2])) {
                s.insert(orders[i][2]);
            }
        }
        ret.resize(m.size() + 1);//重新指定ret一维大小，+1是因为第一行为标题
        ret[0].push_back("Table");
        for (set<string>::iterator it = s.begin(); it != s.end(); it++) {//填充标题
            ret[0].push_back(*it);
        }
        int i = 1;
        for (map<int, vector<string>>::iterator it = m.begin(); it != m.end(); it++) {//填充返回值
            ret[i].push_back(to_string(it->first));
            for (set<string>::iterator Sit = s.begin(); Sit != s.end(); Sit++) {
                ret[i].push_back(to_string(count(it->second.begin(), it->second.end(), *Sit)));
            }
            i++;
        }
        return ret;
    }
};