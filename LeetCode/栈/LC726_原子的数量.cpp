/*
题目描述：LeetCode 726

给定一个化学式formula（作为字符串），返回每种原子的数量。
原子总是以一个大写字母开始，接着跟随0个或任意个小写字母，表示原子的名字。
如果数量大于 1，原子后会跟着数字表示原子的数量。如果数量等于 1 则不会跟数字。例如，H2O 和 H2O2 是可行的，但 H1O2 这个表达是不可行的。
两个化学式连在一起是新的化学式。例如 H2O2He3Mg4 也是化学式。
一个括号中的化学式和数字（可选择性添加）也是化学式。例如 (H2O2) 和 (H2O2)3 是化学式。
给定一个化学式，输出所有原子的数量。格式为：第一个（按字典序）原子的名子，跟着它的数量（如果数量大于 1），然后是第二个原子的名字（按字典序），跟着它的数量（如果数量大于 1），以此类推。

输入:
formula = "K4(ON(SO3)2)2"
输出: "K4N2O14S4"
解释:
原子的数量是 {'K': 4, 'N': 2, 'O': 14, 'S': 4}。
*/
class Solution {
public:
    string countOfAtoms(string formula) {//通过栈实现 右括号带来的倍乘问题
        vector<pair<string, int>> stk; //原子以及数量 vector模拟栈
        int size = formula.size();
        for (int i = 0; i < size; ++i) {
            if (formula[i] == '(') {
                stk.emplace_back(make_pair("(", 0));
            }
            else if (isupper(formula[i])) {//处理一个完整的带数字的
                string temp = "";
                temp += formula[i];
                while (i < size && islower(formula[i + 1])) {
                    i++;
                    temp += formula[i];
                }

                if (i < size && isdigit(formula[i + 1])) {//有数字就是数字
                    int num = 0;
                    while (i < size - 1 && isdigit(formula[i + 1])) {
                        num *= 10;
                        i++;
                        num += formula[i] - '0';
                    }
                    stk.emplace_back(make_pair(temp, num));
                }
                else {//没数字是1
                    stk.emplace_back(make_pair(temp, 1));
                }
            }
            else {//右括号
                int num = 0;
                int tempIndex = stk.size();
                while (i < size - 1 && isdigit(formula[i + 1])) {
                    num *= 10;
                    i++;
                    num += formula[i] - '0';
                }
                if (num == 0) num = 1;//仅仅是个括号，没有翻倍
                while (--tempIndex && stk[tempIndex].first != "(") {
                    stk[tempIndex].second *= num;//翻倍
                }
                stk.erase(stk.begin() + tempIndex);//擦去用过的左括号
            }
        }

        int s = stk.size();
        map<string, int> mMap;
        string res = "";
        for (int i = 0; i < s; ++i) {
            mMap[stk[i].first] += stk[i].second;
        }

        for (auto& m : mMap) {
            if (m.second > 1) res += m.first + to_string(m.second);
            else res += m.first;
        }

        return res;
    }
};
