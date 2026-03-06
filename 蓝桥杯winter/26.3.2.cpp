//替换数字
//卡码网题目链接(opens new window)
//
//给定一个字符串 s，它包含小写字母和数字字符，请编写一个函数，将字符串中的字母字符保持不变，而将每个数字字符替换为number。
//
//例如，对于输入字符串 "a1b2c3"，函数应该将其转换为 "anumberbnumbercnumber"。
//
//对于输入字符串 "a5b"，函数应该将其转换为 "anumberb"
//
//输入：一个字符串 s, s 仅包含小写字母和数字字符。
//
//输出：打印一个新的字符串，其中每个数字字符都被替换为了number
//
//样例输入：a1b2c3
//
//样例输出：anumberbnumbercnumber
//
//数据范围：1 <= s.length < 10000。

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//
//    int n = s.size();
//    int count = 0;
//
//    // 统计数字个数
//    for (char c : s) {
//        if (c >= '0' && c <= '9') {
//            count++;
//        }
//    }
//
//    // 扩容
//    s.resize(n + count * 5);
//
//    int i = n - 1;                     // 原字符串末尾
//    int j = s.size() - 1;              // 新字符串末尾
//
//    // 双指针从后往前
//    while (i >= 0) {
//        if (s[i] >= '0' && s[i] <= '9') {
//            s[j--] = 'r';
//            s[j--] = 'e';
//            s[j--] = 'b';
//            s[j--] = 'm';
//            s[j--] = 'u';
//            s[j--] = 'n';
//        }
//        else {
//            s[j--] = s[i];
//        }
//        i--;
//    }
//
//    cout << s << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//
//    string result;
//
//    for (char c : s) {
//        if (isdigit(c)) {
//            result += "number";
//        }
//        else {
//            result += c;
//        }
//    }
//
//    cout << result << endl;
//
//    return 0;
//}

//区间问题
//题目描述
//
//在数轴上有 n 个闭区间从 1 至 n 编号，第 i 个闭区间为[li, ri]。
//
//现在要从中选出 m 个区间，使得这 m 个区间共同包含至少一个位置。换句话说，就是存在一个 x，使得对于每一个被选中的区间[li, ri]，都有
//
//li ≤ x ≤ ri
//
//对于一个合法的选取方案，它的花费为被选中的最长区间长度减去被选中的最短区间长度。
//
//区间[li, ri] 的长度定义为(ri - li)，即等于右端点减去左端点的值。
//
//求所有合法方案中最小的花费。如果不存在合法的方案，输出 - 1。
//
//输入描述
//
//第一行：两个整数 n 和 m，分别表示区间总数和需要选择的区间数
//
//接下来的 n 行：每行两个整数 li ri，表示第 i 个区间的左右端点
//
//约束条件：
//1 ≤ m ≤ n ≤ 5×10 ^ 5
//0 ≤ li ≤ ri ≤ 10 ^ 9
//
//输出描述
//
//输出一个整数，表示最小花费。如果不存在合法方案，输出 - 1。
//
//输入输出样例
//
//示例 1
//
//输入
//
//6 3
//3 5
//1 2
//3 4
//2 2
//1 5
//1 4
//
//输出
//
//2


//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//using namespace std;
//
//struct Interval {
//    int l, r;
//    int len;
//};
//
//int main()
//{
//    // 请在此输入您的代码
//    int n, m;
//    cin >> n >> m;
//
//    vector<Interval>intervals(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> intervals[i].l >> intervals[i].r;
//        intervals[i].len = intervals[i].r - intervals[i].l;
//    }
//
//    sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
//        return a.l < b.l;
//        });
//
//    int ans = INT_MAX;
//
//    for (int i = 0; i + m - 1 < n; i++)
//    {
//        int max_l = intervals[i + m - 1].l;//窗口右端左端点最大
//        int min_r = intervals[i].r;//窗口内右端最小
//
//        for (int j = i; j <= i + m; j++)
//        {
//            min_r = min(min_r, intervals[j].r);
//        }
//
//        if (max_l <= min_r)
//        {
//            int max_len = INT_MIN;
//            int min_len = INT_MAX;
//
//            for (int j = i; j < i + m - 1; j++)
//            {
//                max_len = max(max_len, intervals[j].len);
//                min_len = min(min_len, intervals[j].len);
//            }
//            ans = min(ans, max_len - min_len);
//        }
//    }
//
//    if (ans == INT_MAX)
//    {
//        cout << -1 << endl;
//    }
//    else {
//        cout << ans << endl;
//    }
//
//
//    return 0;
//}