/*
题目描述：LeetCode 149

给你一个数组 points ，其中 points[i] = [xi, yi] 表示 X-Y 平面上的一个点。
求最多有多少个点在同一条直线上。

输入：points = [[1,1],[2,2],[3,3]]
输出：3
*/
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        //两点确定一条直线
        if (points.size() < 3)return points.size();

        int Max = 1;
        for (int i = 0; i < points.size(); ++i)//i表示数组中的第i+1个点
        {
            for (int j = i + 1; j < points.size(); ++j)//j表示数组中的第j+1个点
            {
                int count = 2;
                long long xDiff = (long long)(points[i][0] - points[j][0]);//Δx1
                long long yDiff = (long long)(points[i][1] - points[j][1]);//Δy1

                for (int k = j + 1; k < points.size(); k++)
                    if (xDiff * (points[i][1] - points[k][1]) == yDiff * (points[i][0] - points[k][0]))
                        count++;
                Max = max(Max, count);
            }
            if (Max > points.size() / 2)return Max;//若某次最大个数超过所有点的一半，则不可能存在其他直线通过更多的点
        }
        return Max;
    }
};