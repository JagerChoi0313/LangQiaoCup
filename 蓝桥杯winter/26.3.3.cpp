//挑选子串
//
//一、题目描述
//
//有 n 个数，和一个整数 m。
//
//现要从这 n 个数中选出一个连续子串，要求这个子串里面至少有 k 个数大于等于 m。
//
//问一共能选出多少个子串（显然子串长度要大于等于 k）。
//
//二、输入描述
//
//第一行输入 3 个整数：
//n m k
//
//第二行输入 n 个整数：
//a1 a2 … an
//
//表示给定的整数序列。
//
//约束条件：
//
//2 ≤ n ≤ 2000
//1 ≤ k ≤ n ^ 2
//1 ≤ m, ai ≤ 10 ^ 9
//
//三、输出描述
//
//输出一个整数，表示满足条件的子串个数。
//
//四、输入输出样例
//
//示例
//
//输入：
//
//7 4 2
//4 2 7 7 6 5 1
//
//输出：
//
//18


#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // 请在此输入您的代码
    int n, m, k;
    cin >> n >> m >> k;

    vector<int>insert(n);
    for (int i = 0; i < n; i++)
    {
        cin >> insert[i];
    }

    vector<int>change(n);
    for (int i = 0; i < n; i++)
    {
        change[i] = (insert[i] >= m) ? 1 : 0;
    }


    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + change[i - 1];
    }

    long long ans = 0;
    int r = 0;


    for (int l = 0; l < n; l++)
    {
        if (r < l + k - 1)
        {
            r = l + k - 1;
        }

        if (r >= n)
        {
            break;
        }

        while (r < n && pre[r + 1] - pre[l] < k)
        {
            r++;
        }

        if (r >= n)
        {
            break;
        }

        ans = ans + n - r;
    }

    cout << ans << endl;
    return 0;
}