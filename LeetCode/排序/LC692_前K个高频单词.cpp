/*
题目描述：LeetCode 692

给一非空的单词列表，返回前 k 个出现次数最多的单词。
返回的答案应该按单词出现频率由高到低排序。如果不同的单词有相同出现频率，按字母顺序排序。

输入: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
输出: ["i", "love"]
解析: "i" 和 "love" 为出现次数最多的两个单词，均为2次。
    注意，按字母顺序 "i" 在 "love" 之前。
*/
// lambda表达式 + decltype
class Solution {
public:
    using PIS = pair<int, string>;
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> um;
        for (auto& word : words)
            um[word]++;
        auto cmp = [](const PIS& p1, const PIS& p2) {
            if (p1.first == p2.first)
                return p1.second < p2.second;
            return p1.first > p2.first;
        };
        priority_queue<PIS, vector<PIS>, decltype(cmp)> pq(cmp);
        for (auto& [key, value] : um) {
            pq.push({ value, key });
            if (pq.size() > k) pq.pop();
        }

        vector<string> ans(k);
        while (!pq.empty()) {
            ans[--k] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};
//官方题解
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> cnt;
        for (auto& word : words) {
            ++cnt[word];
        }
        vector<string> rec;
        for (auto& [key, value] : cnt) {
            rec.emplace_back(key);
        }
        sort(rec.begin(), rec.end(), [&](const string& a, const string& b) -> bool {
            return cnt[a] == cnt[b] ? a < b : cnt[a] > cnt[b];
            });
        rec.erase(rec.begin() + k, rec.end());
        return rec;
    }
};
