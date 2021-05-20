/*
��Ŀ������LeetCode 692

��һ�ǿյĵ����б�����ǰ k �����ִ������ĵ��ʡ�
���صĴ�Ӧ�ð����ʳ���Ƶ���ɸߵ������������ͬ�ĵ�������ͬ����Ƶ�ʣ�����ĸ˳������

����: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
���: ["i", "love"]
����: "i" �� "love" Ϊ���ִ��������������ʣ���Ϊ2�Ρ�
    ע�⣬����ĸ˳�� "i" �� "love" ֮ǰ��
*/
// lambda���ʽ + decltype
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
//�ٷ����
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
