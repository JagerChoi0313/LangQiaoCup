//日志统计
//题目描述
//小明维护着一个程序员论坛。现在他收集了一份 "点赞" 日志，日志共有 N 行。其中每一行的格式是：
//ts id
//表示在 ts 时刻编号 id 的帖子收到一个 "赞"。
//现在小明想统计有哪些帖子曾经是 "热帖"。如果一个帖子曾在任意一个长度为 D 的时间段内收到不少于 K 个赞，小明就认为这个帖子曾是 "热帖"。
//具体来说，如果存在某个时刻 T 满足该帖在[T, T + D) 这段时间内（注意是左闭右开区间）收到不少于 K 个赞，该帖就曾是 "热帖"。
//给定日志，请你帮助小明统计出所有曾是 "热帖" 的帖子编号。
//输入描述
//输入格式：
//第一行包含三个整数 N, D, K。
//以下 N 行每行一条日志，包含两个整数 ts 和 id。
//数据范围：
//1 ≤ K ≤ N ≤ 10⁵，0 ≤ ts ≤ 10⁵，0 ≤ id ≤ 10⁵。
//输出描述
//按从小到大的顺序输出热帖 id。每个 id 单独占一行。
//输入输出样例
//输入
//7 10 2
//0 1
//0 10
//10 10
//10 1
//9 1
//100 3
//100 3
//输出
//1
//3

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int N, D, K;
    cin >> N >> D >> K;

    //存储每个帖子id所用的时间
    unordered_map<int, vector<int>>mp;

    for (int i = 0; i < N; i++)
    {
        int ts, id;
        cin >> ts >> id;
        mp[id].push_back(ts);
    }

    vector<int>result;

    //遍历每个帖子
    for (auto& p : mp)
    {
        int id = p.first;
        vector<int>& times = p.second;//这是指针数组吗

        sort(times.begin(), times.end());

        int l = 0;
        for (int r = 0; r < times.size(); r++)
        {
            while (times[r] - times[l] >= D)
            {
                l++;
            }

            if (r - l + 1 >= K)
            {
                result.push_back(id);
                break;
            }
        }
    }



    sort(result.begin(), result.end());

    for (int id : result)
    {
        cout << id << endl;
    }
    return 0;
}