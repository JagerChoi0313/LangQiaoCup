//实现一个算法来识别一个字符串的字符是否是唯一的（忽略字母大小写）。
//
//若唯一，则输出YES，否则输出NO。
//
//输入描述
//输入一行字符串，长度不超过 100。
//
//输出描述
//输出一行，若字符串的字符是唯一的，则输出YES，否则输出NO。
//
//输入输出样例
//示例
//输入
//
//abd25 +
//copy
//输出
//
//YES

#include <iostream>
#include <unordered_set>
#include <cctype>
using namespace std;

bool hasunqiuechar(const string& str)
{
    unordered_set<char>seenChars;

    for (char c : str)
    {
        c = tolower(c);

        if (seenChars.find(c) != seenChars.end())
        {
            return false;
        }

        seenChars.insert(c);
    }
    return true;

}
int main()
{
    // 请在此输入您的代码
    string input;
    cin >> input;

    if (hasunqiuechar(input))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}