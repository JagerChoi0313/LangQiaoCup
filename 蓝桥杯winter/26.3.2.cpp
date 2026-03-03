//替换数字
//卡码网题目链接(opens new window)
//
//给定一个字符串 s，它包含小写字母和数字字符，请编写一个函数，将字符串中的字母字符保持不变，而将每个数字字符替换为number。
//
//例如，对于输入字符串 "a1b2c3"，函数应该将其转换为 "anumberbnumbercnumber"。
//
//对于输入字符串 "a5b"，函数应该将其转换为 "anumberb"
//
//输入：一个字符串 s, s 仅包含小写字母和数字字符。
//
//输出：打印一个新的字符串，其中每个数字字符都被替换为了number
//
//样例输入：a1b2c3
//
//样例输出：anumberbnumbercnumber
//
//数据范围：1 <= s.length < 10000。

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//
//    int n = s.size();
//    int count = 0;
//
//    // 统计数字个数
//    for (char c : s) {
//        if (c >= '0' && c <= '9') {
//            count++;
//        }
//    }
//
//    // 扩容
//    s.resize(n + count * 5);
//
//    int i = n - 1;                     // 原字符串末尾
//    int j = s.size() - 1;              // 新字符串末尾
//
//    // 双指针从后往前
//    while (i >= 0) {
//        if (s[i] >= '0' && s[i] <= '9') {
//            s[j--] = 'r';
//            s[j--] = 'e';
//            s[j--] = 'b';
//            s[j--] = 'm';
//            s[j--] = 'u';
//            s[j--] = 'n';
//        }
//        else {
//            s[j--] = s[i];
//        }
//        i--;
//    }
//
//    cout << s << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//
//    string result;
//
//    for (char c : s) {
//        if (isdigit(c)) {
//            result += "number";
//        }
//        else {
//            result += c;
//        }
//    }
//
//    cout << result << endl;
//
//    return 0;
//}