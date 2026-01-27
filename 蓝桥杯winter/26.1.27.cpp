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

//#include <iostream>
//#include <unordered_set>
//#include <cctype>
//using namespace std;
//
//bool hasunqiuechar(const string& str)
//{
//    unordered_set<char>seenChars;
//
//    for (char c : str)
//    {
//        c = tolower(c);
//
//        if (seenChars.find(c) != seenChars.end())
//        {
//            return false;
//        }
//
//        seenChars.insert(c);
//    }
//    return true;
//
//}
//int main()
//{
//    // 请在此输入您的代码
//    string input;
//    cin >> input;
//
//    if (hasunqiuechar(input))
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
//
//    return 0;
//}

//确定字符串是否是另一个的排列
//
//题目描述
//实现一个算法来识别一个字符串
//s
//t
//r
//2
//str2 是否是另一个字符串
//s
//t
//r
//1
//str1 的排列。排列的解释如下：如果将
//s
//t
//r
//1
//str1 的字符拆分开，重新排列后再拼接起来，能够得到
//s
//t
//r
//2
//str2 ，那么就说字符串
//s
//t
//r
//2
//str2 是字符串
//s
//t
//r
//1
//str1 的排列。（不忽略大小写）
//
//如果
//s
//t
//r
//2
//str2 字符串是
//s
//t
//r
//1
//str1 字符串的排列，则输出 YES；如果
//s
//t
//r
//2
//str2 字符串不是
//s
//t
//r
//1
//str1 字符串的排列，则输出 NO；
//
//输入描述
//第一行为字符串
//s
//t
//r
//1
//str1；
//
//第二行为字符串
//s
//t
//r
//2
//str2；
//
//字符串长度均不超过 100。
//
//输出描述；
//输出一行，如果
//s
//t
//r
//2
//str2 字符串是
//s
//t
//r
//1
//str1 字符串的排列，则输出 YES；
//
//如果
//s
//t
//r
//2
//str2 字符串不是
//s
//t
//r
//1
//str1 字符串的排列，则输出 NO；
//
//输入输出样例
//示例
//输入
//
//acb
//bac
//copy
//输出
//
//YES

//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//
//int main()
//{
//    // 请在此输入您的代码
//
//    string str1, str2;
//    cin >> str1 >> str2;
//    if (str1.length() != str2.length())
//    {
//        cout << "NO" << endl;
//        return 0;
//    }
//
//    sort(str1.begin(), str1.end());
//    sort(str2.begin(), str2.end());
//
//    if (str1 == str2)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
//
//    return 0;
//}