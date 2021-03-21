/*
题目描述：LeetCode 73

给定一个 m x n 的矩阵，如果一个元素为 0，则将其所在行和列的所有元素都设为 0。请使用原地算法。

输入:
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
输出:
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
*/
class Solution {
public:
    void setrow(vector<vector<int>>& m, int num) {
        for (int j = 0; j < m[0].size(); j++) {
            m[num][j] = 0;
        }
    }
    void setcol(vector<vector<int>>& m, int num) {
        for (int j = 0; j < m.size(); j++) {
            m[j][num] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& m) {
        bool row = false, col = false;
        for (int i = 0; i < m.size(); i++) {
            if (m[i][0] == 0) {
                col = true;
                break;
            }
        }
        for (int i = 0; i < m[0].size(); i++) {
            if (m[0][i] == 0) {
                row = true;
                break;
            }
        }
        for (int i = 1; i < m.size(); i++) {
            for (int j = 1; j < m[0].size(); j++) {
                if (m[i][j] == 0) {
                    m[i][0] = 0;
                    m[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < m[0].size(); i++) {
            if (m[0][i] == 0) {
                setcol(m, i);
            }
        }
        for (int i = 1; i < m.size(); i++) {
            if (m[i][0] == 0) {
                setrow(m, i);
            }
        }
        if (row == true) {
            setrow(m, 0);
        }
        if (col == true) {
            setcol(m, 0);
        }

    }
};