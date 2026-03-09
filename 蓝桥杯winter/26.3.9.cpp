#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    string input;
    cin >> input;

    int l = 0;
    int r = input.size()-1;
    int count = 0;

    while (l <= r)
    {
        if (input[l] != input[r])
        {
            count++;
        }
        l++;
        r--;
    }

    cout << count << endl;
    return 0;
}