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


//最大化股票交易的利润

//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int N;
//    cin >> N;
//
//    vector<int>prices(N);
//    for (int i = 0; i < N; i++)
//    {
//        cin >> prices[i];
//    }
//
//    //记录历史最低买入价
//    int minprice = prices[0];
//
//    //记录最大利润
//    int maxprofit = prices[1] - prices[0];
//
//    for (int i = 1; i < N; i++)
//    {
//        //如果今天卖出能得到的利润
//        int profit = prices[i] - minprice;
//
//        //更新最大利润
//        if (profit > maxprofit)
//        {
//            maxprofit = profit;
//        }
//
//        //更新历史最低价（为以后买入做准备）
//        if (prices[i] < minprice)
//        {
//            minprice = prices[i];
//        }
//
//    }
//
//    cout << maxprofit;
//
//    return 0;
//}


//方法二
//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int N;
//    cin >> N;
//
//    vector<int>prices(N);
//    for (int i = 0; i < N; i++)
//    {
//        cin >> prices[i];
//    }
//
//    //dp[i]:第i天卖出时的最大利润
//    vector<int>dp(N);
//
//    //minprice(N):  前i天的最低价格
//    vector<int>minprice(N);
//
//    //初始化
//    minprice[0] = prices[0];
//    dp[0] = 0;//第0天无法卖出，记为0
//
//    int ans = INT_MIN;
//
//    for (int i = 1; i < N; i++)
//    {
//        minprice[i] = min(minprice[i - 1], prices[i]);
//
//        dp[i] = prices[i] - minprice[i - 1];//为什么不是minprice[i]，因为minprice[i]可能是当天的价格，那就变成了当天买当天卖
//
//        //更新答案
//        ans = max(ans, dp[i]);
//
//    }
//
//    cout << ans << endl;
//
//
//    return 0;
//}

