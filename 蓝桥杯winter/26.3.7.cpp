//差为 1 的数对
//
//一、问题描述
//
//小蓝有一个长度为 n 的正整数数组：
//
//A = [a1, a2, …, an]
//
//每当他从中拿出一对(ai, aj)，其中 i < j，他会得到它们的差：
//
//	b = aj − ai
//
//	然而，小蓝特别喜欢整数 1，所以他想知道在数组 A 中最多能同时取出多少对正整数(ai, aj)，并满足：
//
//	1）每个数最多只能被使用一次
//	2）它们的差为 1
//
//	二、输入格式
//
//	第一行输入一个正整数：
//
//	n
//
//	第二行输入 n 个正整数：
//
//	a1 a2 … an
//
//	相邻整数之间用一个空格分隔。
//
//	三、输出格式
//
//	输出一行，包含一个整数，表示最多可以取出的差为 1 的数对数量。
//
//	四、样例输入
//
//	6
//	2 1 3 6 4 7
//
//	五、样例输出
//
//	2
//
//	六、样例说明
//
//	其中一种可行方案为：
//
//	(a1, a3)
//	(a4, a6)
//
//	即：
//
//	(2, 3)
//	(6, 7)
//
//	七、提示
//
//	(a1, a2) 的差为：
//
//	a2 − a1 = −1
//
//	因此不符合小蓝喜欢的差为 1 的条件。
//
//	八、评测用例规模与约定
//
//	对于 40 % 的评测用例：
//
//	1 ≤ n ≤ 1000
//	1 ≤ ai ≤ 1000
//
//	对于所有评测用例：
//
//	1 ≤ n ≤ 1000000
//	1 ≤ ai ≤ 1000000
//
//	九、运行限制
//
//	语言 最大运行时间 最大运行内存
//	C++ 1s 256M
//	C 1s 256M
//	Java 2s 256M
//	Python3 3s 256M
//	PyPy3 3s 256M
//	Go 3s 256M
//	JavaScript 3s 256M

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int n;
//    cin >> n;
//
//    vector<int> a(n + 1);
//    int maxv = 0;
//
//    // 统计每个值出现次数
//    vector<int> cnt(1000002, 0);
//    for (int i = 1; i <= n; i++) {
//        cin >> a[i];
//        cnt[a[i]]++;
//        if (a[i] > maxv) maxv = a[i];
//    }
//
//    // start[v] = 值 v 的位置段起点（在 allPos 中）
//    vector<int> start(maxv + 2, 0);
//    for (int v = 1; v <= maxv + 1; v++) {
//        start[v] = start[v - 1] + cnt[v - 1];
//    }
//
//    // 把每个值的所有出现位置按顺序放进 allPos
//    vector<int> allPos(n);
//    vector<int> cur = start;
//    for (int i = 1; i <= n; i++) {
//        int x = a[i];
//        allPos[cur[x]++] = i;
//    }
//
//    long long ans = 0;
//
//    // rem 表示当前值 v 还保留下来、可供和 v+1 匹配的个数
//    int rem = cnt[1];
//
//    for (int v = 1; v < maxv; v++) {
//        int s1 = start[v];       // 值 v 的段起点
//        int s2 = start[v + 1];   // 值 v+1 的段起点
//        int len2 = cnt[v + 1];
//
//        int i = s1 + rem - 1;       // 当前可用的最后一个 v
//        int j = s2 + len2 - 1;      // 最后一个 v+1
//        int matched = 0;
//
//        while (i >= s1 && j >= s2) {
//            if (allPos[i] < allPos[j]) {
//                matched++;
//                i--;
//                j--;
//            }
//            else {
//                i--;
//            }
//        }
//
//        ans += matched;
//
//        // 剩下未匹配的 v+1 是最早的前缀
//        rem = j - s2 + 1;
//    }
//
//    cout << ans << '\n';
//    return 0;
//}