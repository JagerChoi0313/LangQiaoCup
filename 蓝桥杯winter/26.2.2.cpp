//Ì¨½×ÎÊÌâ

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> dp(N + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= N; i++)
    {
        for (int step = 1; step <= i; step++)
        {
            dp[i] += dp[i - step];
        }
    }

    cout << dp[N];
    return 0;
}
