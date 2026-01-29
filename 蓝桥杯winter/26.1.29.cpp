//01背包问题算法求解
//题目描述
//实现一个算法求解01背包问题。背包问题的介绍如下：
//已知一个容量为 total_weight 的背包，有不同重量不同价值的物品，问怎样在背包容量限制下达到利益最大化。01背包问题要求每个物品只有一个，可以选择放入或者不放入背包。
//背包问题求解方法介绍
//用符号 V_i 表示第 i 个物品的价值，W_i 表示第 i 个物品的体积，V_i, j 表示当前背包容量为 j 时，前 i 个物品最佳组合对应的价值。
//状态转移方程
//对于当前第 i 个商品，如果包的容量比该物品体积小，即 j < W_i。那么此时的价值与前 i - 1 个的价值是一样的，即 V_i, j = V_i - 1, j。
//	对于当前第 i 个商品，如果包的容量能够装下该物品，即 W_i ≤ j。此时需要判断装或者不装这个物品的价值对比，选择使价值更大的情况，即 V_i, j = max(V_i + V_i - 1, j - W_i, V_i - 1, j)。
//	回溯法求解组成
//	通过最优解回溯法找到解的组成：
//	● 当 V_i, j = V_i - 1, j 时，说明没有选择第 i 个物品
//	● 当 V_i, j = V_i - 1, j - W_i 时，说明装了第 i 个物品
//	从 i，j 的最大值一直遍历到 i＝0，则找到了所有解。
//	输入描述
//	第一行为两个数字 total_weight、N，均不超过1000。total_weight 含义见题干，N 为物品数量。
//	接下来 N 行，每行两个数字 W_i、V_i，均不超过1000。含义见题干。
//	输出描述
//	输出一行，为在背包容量限制下的最大化利益。
//	输入输出样例
//	示例
//	输入：
//	代码
//	图标 / 24_new / 复制
//
//	8 5
//	3 4
//	5 5
//	1 2
//	2 1
//	2 3
//
//	输出：
//	代码
//	图标 / 24_new / 复制
//
//	10


//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int totalweight;
//    int N;
//    cin >> totalweight >> N;
//
//    vector<int> w(N + 1, 0);
//    vector<int> v(N + 1, 0);
//
//    for (int i = 1; i <= N; i++)
//    {
//        cin >> w[i] >> v[i];
//    }
//
//    vector<vector<int>>dp(N + 1, vector<int>(totalweight + 1, 0));
//
//    for (int i = 1; i <= N; i++)
//    {
//        for (int j = 0; j <= totalweight; j++)
//        {
//            if (j < w[i])
//            {
//                dp[i][j] = dp[i - 1][j];
//            }
//            else
//            {
//                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
//            }
//        }
//    }
//
//    int max_value = dp[N][totalweight];
//    cout << max_value << endl;
//    return 0;
//}

#include <iostream>
#include <unordered_set>
#include <cctype>

using namespace std;

bool hasuniquechar(const string& str)
{
    unordered_set<char>judge;

    for (char c : str)
    {
        c = tolower(c);

        if (judge.find(c) != judge.end())
        {
            return false;
        }

        judge.insert(c);
    }

    return true;
}

int main()
{
    string input;
    cin >> input;

    if (hasuniquechar(input))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}