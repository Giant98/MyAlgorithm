/*
题目描述：LeetCode 881

第 i 个人的体重为 people[i]，每艘船可以承载的最大重量为 limit。
每艘船最多可同时载两人，但条件是这些人的重量之和最多为 limit。
返回载到每一个人所需的最小船数。(保证每个人都能被船载)。

输入：people = [1,2], limit = 3
输出：1
解释：1 艘船载 (1, 2)
*/
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans = 0;
        sort(people.begin(), people.end());
        int light = 0, heavy = people.size() - 1;
        while (light <= heavy) {
            if (people[light] + people[heavy] > limit) {
                --heavy;
            }
            else {
                ++light;
                --heavy;
            }
            ++ans;
        }
        return ans;
    }
};
