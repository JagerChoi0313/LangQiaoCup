//压缩字符串
//
//题目描述
//实现一个算法来压缩一个字符串。压缩的要求如下：
//
//需要判断压缩能不能节省空间，仅在压缩后字符串比原字符串长度更短时进行压缩。
//
//压缩的格式是将连续相同字符替换为字符 + 数字形式，例如 "AAABCCDDDD" 变为 "A3BC2D4"。
//
//输入描述
//输入一行字符串，长度不超过 500.
//
//输出描述
//输出一行。若输入的字符串可压缩，则输出压缩后的字符串，否则输出 NO。
//
//输入输出样例
//示例
//输入
//
//AAABCCDDDD
//copy
//输出
//
//A3BC2D4



//#include <iostream>
//#include <string>
//
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    string input;
//    getline(cin, input);
//
//    string compressed = "";
//    int n = input.length();
//
//    for (int i = 0; i < n;)
//    {
//        char current = input[i];
//        int count = 1;
//
//        while (i + count < n && input[i + count] == current)
//        {
//            count++;
//        }
//
//        compressed += current;
//
//        if (count > 1)
//        {
//            compressed += to_string(count);
//        }
//
//        i += count;
//    }
//
//    if (compressed.length() < input.length())
//    {
//        cout << compressed << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
//
//    return 0;
//}




//反转字符串中的字符
//
//题目描述
//实现一个算法来实现反转字符数组的功能。反转的要求如下：
//
//将字符数组的字符进行反转，例如['b', ' ', 'a', 'r'] 变成['r', 'a', ' ', 'b']。
//
//将字符数组替换为反转后的数组。
//
//输入描述
//读入一行字符串，长度不超过 100，字符串可能含有空格。
//
//输出描述
//输出一行字符串，该字符串为读入字符串的反转字符串。
//
//输入输出样例
//示例
//输入
//
//b ar
//copy
//输出
//
//ra b





//方法一
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    string input;
//    getline(cin, input);
//
//    string compressed = "";
//    int n = input.length();
//
//    for (int i = n - 1; i >= 0; i--)
//    {
//        char current = input[i];
//        compressed += current;
//
//    }
//
//    cout << compressed << endl;
//    return 0;
//}


//方法二
// #include <iostream>
// #include <algorithm>
// #include <string>

// using namespace std;

// int main()
// {
//   string input;
//   getline(cin,input);

//   reverse(input.begin(),input.end());

//   cout<<input<<endl;
//   return 0;
// }



//方法三

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string input;
//    getline(cin, input);
//
//    int left = 0;
//    int right = input.size() - 1;
//
//    while (left < right)
//    {
//        swap(input[left], input[right]);
//        left++;
//        right--;
//    }
//
//    cout << input << endl;
//
//    return 0;
//}




//找到给定字符串中的不同字符
//题目描述
//在不考虑字符排列的条件下，对于相差只有一个字符的两个字符串，实现一个算法来识别相差的那个字符。要求如下：
//
//当传入的字符串为 aad 和 ad 时，结果为 a。
//
//当传入的字符串为 aaabccdd 和 abdcacade 时，结果为 e。
//
//输入描述
//输入两行字符串，长度均不超过 100。
//
//输出描述 :
//输出一行，为相差的那个字符。
//
//输入输出样例
//示例
//输入
//
//aad
//ad
//copy
//输出
//
//a


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    string str1, str2;
//    cin >> str1 >> str2;
//
//    int cnt[256] = { 0 };
//
//    for (char c : str1)
//    {
//        cnt[c]++;
//    }
//
//    for (char c : str2)
//    {
//        cnt[c]--;
//    }
//
//    for (int i = 0; i < 256; i++)
//    {
//        if (cnt[i] != 0)
//        {
//            cout << (char)i << endl;
//            break;
//        }
//    }
//    return 0;
//}




//查找两个总和为特定值的索引
//
//题目描述
//给定一个数组，找到两个总和为特定值的索引。
//
//例如给定数组[1, 2, 3, -2, 5, 7]，给定总和 7，则返回索引[1, 4]。
//
//若有多组符合情况则输出索引对中小索引最小的一组。
//
//输入描述
//第一行为给定数组的长度，不超过 100。
//
//第二行为数组元素，元素大小不超过 100（可能为负数）。
//
//第三行为特定值。
//
//输出描述
//输出一行，为两个索引值，升序输出。
//
//输入输出样例
//示例
//输入
//
//6
//1 2 3 - 2 5 7
//7
//copy
//输出
//
//1 4



//#include <iostream>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int n;
//    cin >> n;
//    int arr[100];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    int N;
//    cin >> N;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (arr[i] + arr[j] == N)
//            {
//                cout << i << " " << j << endl;
//                return 0;
//            }
//        }
//    }
//
//
//    return 0;
//}