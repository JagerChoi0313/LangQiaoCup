//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N, K;
//
//
//int piece(int n, int m)
//{
//    int min_wide = min(n, m);
//    int max_square = 0;
//    int max_size = 0;
//    for (int i = 1; i <= min_wide; i++)
//    {
//        if (i * i > max_square && i * i < n * m && (n * m) / (i * i) >= K)
//        {
//            max_square = i * i;
//            max_size = i;
//        }
//    }
//
//    return max_size;
//}
//
//
//int main()
//{
//    // 请在此输入您的代码
//    cin >> N >> K;
//    vector<int>H(N, 0);
//    vector<int>W(N, 0);
//    for (int i = 0; i < N; i++)
//    {
//        cin >> H[i] >> W[i];
//    }
//
//    int Max_wide = 0;
//    for (int i = 0; i < N; i++)
//    {
//        int wide = piece(H[i], W[i]);
//        Max_wide = max(Max_wide, wide);
//    }
//
//    cout << Max_wide << endl;
//    return 0;
//}