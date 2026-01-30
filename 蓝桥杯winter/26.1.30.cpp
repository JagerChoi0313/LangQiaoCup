//查找最长的上升子序列


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int N;
//    cin >> N;
//    vector<int>arr(N);
//    for (int i = 0; i < N; i++)
//    {
//        cin >> arr[i];
//    }
//
//    //dp(N,1):以i结尾的最长上升子序列长度
//    vector<int>dp(N, 1);
//
//    //i这个元素前一个元素的位置
//    vector<int>pre(N, -1);
//
//    //动态规划
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j]<arr[i] && dp[j] + 1>dp[i])
//            {
//                dp[i] = dp[j] + 1;
//                pre[i] = j;
//            }
//        }
//    }
//
//    //找到LIS最后一个位置
//    int maxlen = 0;
//    int end = 0;
//
//    for (int i = 0; i < N; i++)
//    {
//        if (dp[i] > maxlen)
//        {
//            maxlen = dp[i];
//            end = i;
//        }
//    }
//
//    vector<int>lis;
//    while (end != -1)
//    {
//        lis.push_back(arr[end]);
//        end = pre[end];
//    }
//
//    //因为从后往前回溯，需要回转
//    reverse(lis.begin(), lis.end());
//
//    //输出结果
//
//    for (int x : lis)
//    {
//        cout << x << " ";
//    }
//
//    return 0;
//}