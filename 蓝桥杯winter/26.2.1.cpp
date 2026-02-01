//Excel地址
//
//题目描述
//Excel 单元格的地址表示很有趣，它使用字母来表示列号。
//
//比如，
//
//A 表示第 1 列，
//
//B 表示第 2 列，
//
//Z 表示第 26 列，
//
//AA 表示第 27 列，
//
//AB 表示第 28 列，
//
//BA 表示第 53 列，
//
//⋯
//⋯
//
//当然 Excel 的最大列号是有限度的，所以转换起来不难。
//
//如果我们想把这种表示法一般化，可以把很大的数字转换为很长的字母序列呢？
//
//本题目即是要求对输入的数字, 输出其对应的 Excel 地址表示方式。
//
//输入描述
//输入一个整数
//n
//n，其范围[1, 2147483647]。
//
//输出描述
//输出
//n
//n 对应的 Excel 地址表示方式。
//
//输入输出样例
//示例
//输入
//
//26
//copy
//输出
//
//Z
//
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//string numberToTitle(int n)
//{
//    string result = "";
//
//    while (n > 0)
//    {
//        n--;
//        result = char(n % 26 + 'A') + result;
//        n /= 26;//除以26，处理下一个位
//    }
//
//    return result;
//}
//
//int main()
//{
//    // 请在此输入您的代码
//    int n;
//    cin >> n;
//
//    cout << numberToTitle(n) << endl;
//
//    return 0;
//}



//硬币问题

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int N, M;
//    cin >> N >> M;
//
//    vector<int> coin(N);
//    for (int i = 0; i < N; i++) {
//        cin >> coin[i];
//    }
//
//    vector<vector<long long>> dp(N + 1, vector<long long>(M + 1, 0));
//
//    // 初始化：组成金额0的方法数为1（什么都不选）
//    for (int i = 0; i <= N; i++) {
//        dp[i][0] = 1;
//    }
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            // 不使用第i种硬币
//            dp[i][j] = dp[i - 1][j];
//
//            // 使用第i种硬币
//            if (j >= coin[i - 1]) {
//                dp[i][j] += dp[i][j - coin[i - 1]];
//            }
//        }
//    }
//
//    cout << dp[N][M] << endl;
//
//    return 0;
//}

//方法二

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int N, M;
//    cin >> N >> M;
//
//    vector<int> coin(N);
//    for (int i = 0; i < N; i++) {
//        cin >> coin[i];
//    }
//
//    vector<long long> dp(M + 1, 0);
//    dp[0] = 1;  // 金额为0时有一种方法
//
//    for (int i = 0; i < N; i++) {
//        for (int j = coin[i]; j <= M; j++) {
//            dp[j] += dp[j - coin[i]];
//        }
//    }
//
//    cout << dp[M] << endl;
//
//    return 0;
//}