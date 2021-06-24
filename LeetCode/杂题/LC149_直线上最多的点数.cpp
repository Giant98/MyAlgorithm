/*
��Ŀ������LeetCode 149

����һ������ points ������ points[i] = [xi, yi] ��ʾ X-Y ƽ���ϵ�һ���㡣
������ж��ٸ�����ͬһ��ֱ���ϡ�

���룺points = [[1,1],[2,2],[3,3]]
�����3
*/
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        //����ȷ��һ��ֱ��
        if (points.size() < 3)return points.size();

        int Max = 1;
        for (int i = 0; i < points.size(); ++i)//i��ʾ�����еĵ�i+1����
        {
            for (int j = i + 1; j < points.size(); ++j)//j��ʾ�����еĵ�j+1����
            {
                int count = 2;
                long long xDiff = (long long)(points[i][0] - points[j][0]);//��x1
                long long yDiff = (long long)(points[i][1] - points[j][1]);//��y1

                for (int k = j + 1; k < points.size(); k++)
                    if (xDiff * (points[i][1] - points[k][1]) == yDiff * (points[i][0] - points[k][0]))
                        count++;
                Max = max(Max, count);
            }
            if (Max > points.size() / 2)return Max;//��ĳ���������������е��һ�룬�򲻿��ܴ�������ֱ��ͨ������ĵ�
        }
        return Max;
    }
};