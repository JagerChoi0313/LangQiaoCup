//01背包问题

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    int totalweight;
//    int N;
//    cin >> totalweight >> N;
//
//    vector<int>w(N + 1, 0);
//    vector<int>v(N + 1, 0);
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
//
//
// 
//    
//    
//    //回溯部分开始
//
//    vector<int>selected;
//    int current_i = N;
//    int current_j = totalweight;
//
//    while (current_i > 0)
//    {
//        if (dp[current_i][current_j] == dp[current_i - 1][current_j])
//        {
//            current_i--;
//        }
//        else
//        {
//            selected.push_back(current_i);
//            current_j -= w[current_i];
//            current_i--;
//        }
//    }
//
//    cout << "选中的物品";
//    if (selected.empty())
//    {
//        cout << "无";
//    }
//    else
//    {
//        for (int k = selected.size() - 1; k >= 0; k--)
//        {
//            cout << selected[k];
//            if (k > 0)cout << " ";
//        }
//    }
//    cout << endl;
//
//    return 0;
//}


//完全背包问题

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    int totalweight;
//    int N;
//    cin >> totalweight >> N;
//
//    vector<int>w(N + 1);
//    vector<int>v(N + 1);
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
//
//            //第一种方案：不选第i种物品
//            dp[i][j] = dp[i - 1][j];
//
//            //第二种方法：选一个，二个，三个....第i种物品（只要装得下）
//            if (j >= w[i])
//            {
//                //选k个第i种物品，k>=1
//                //因为可以无限选，所以我们直接用dp[i][j-w[i]]+v[i]
//                //dp[i][j-w[i]]已经包含了可以再选第i种物品的可能性
//
//                dp[i][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
//            }
//        }
//    }
//
//    cout << dp[N][totalweight] << endl;
//    return 0;
//}