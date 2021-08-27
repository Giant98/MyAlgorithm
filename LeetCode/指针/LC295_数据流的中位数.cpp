/*
题目描述：LeetCode 295

中位数是有序列表中间的数。如果列表长度是偶数，中位数则是中间两个数的平均值。
例如，
[2,3,4] 的中位数是 3
[2,3] 的中位数是 (2 + 3) / 2 = 2.5
设计一个支持以下两种操作的数据结构：
void addNum(int num) - 从数据流中添加一个整数到数据结构中。
double findMedian() - 返回目前所有元素的中位数。

addNum(1)
addNum(2)
findMedian() -> 1.5
addNum(3)
findMedian() -> 2
*/
class MedianFinder {
    multiset<int> nums;
    multiset<int>::iterator left, right;

public:
    MedianFinder() : left(nums.end()), right(nums.end()) {}

    void addNum(int num) {
        const size_t n = nums.size();

        nums.insert(num);
        if (!n) {
            left = right = nums.begin();
        }
        else if (n & 1) {
            if (num < *left) {
                left--;
            }
            else {
                right++;
            }
        }
        else {
            if (num > *left && num < *right) {
                left++;
                right--;
            }
            else if (num >= *right) {
                left++;
            }
            else {
                right--;
                left = right;
            }
        }
    }

    double findMedian() {
        return (*left + *right) / 2.0;
    }
};

