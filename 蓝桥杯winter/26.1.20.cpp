//平方矩阵 I

//输入整数 N
//，输出一个 N
//阶的回字形二维数组。
//
//数组的最外层为 1
//，次外层为 2
//，以此类推。
//
//输入格式
//输入包含多行，每行包含一个整数 N
//。
//
//当输入行为 N = 0
//时，表示输入结束，且该行无需作任何处理。
//
//输出格式
//对于每个输入整数 N
//，输出一个满足要求的 N
//阶二维数组。
//
//每个数组占 N
//行，每行包含 N
//个用空格隔开的整数。
//
//每个数组输出完毕后，输出一个空行。
//
//数据范围
//0≤N≤100
//
//输入样例：
//1
//2
//3
//4
//5
//0
//输出样例：
//1
//
//1 1
//1 1
//
//1 1 1
//1 2 1
//1 1 1
//
//1 1 1 1
//1 2 2 1
//1 2 2 1
//1 1 1 1
//
//1 1 1 1 1
//1 2 2 2 1
//1 2 3 2 1
//1 2 2 2 1
//1 1 1 1 1
//


//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n, n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				//计算(i,j)到上下左右边界的最近距离，再加1就是该位置的值
//
//				int top = i + 1;
//				int bottom = n - i;
//				int left = j + 1;
//				int right = n - j;
//				int layer = min(min(top, bottom), min(left, right));
//
//				cout << layer;
//				if (j < n - 1) cout << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}




//单词替换
//输入一个字符串，以回车结束（字符串长度不超过 100
//）。
//
//该字符串由若干个单词组成，单词之间用一个空格隔开，所有单词区分大小写。
//
//现需要将其中的某个单词替换成另一个单词，并输出替换之后的字符串。
//
//输入格式
//输入共 3
//行。
//
//第 1
//行是包含多个单词的字符串 s
//;
//
//第 2
//行是待替换的单词 a
//(长度不超过 100
//);
//
//第 3
//行是 a
//将被替换的单词 b
//(长度不超过 100
//)。
//
//输出格式
//共一行，输出将 s
//中所有单词 a
//替换成 b
//之后的字符串。
//
//输入样例：
//You want someone to help you
//You
//I
//输出样例：
//I want someone to help you





//#include <iostream>
//#include <sstream>//字符串流，用于把字符串按空格分割成单词。
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s, a, b;
//	getline(cin, s);//读取一整行（包括空格）存入s
//	cin >> a >> b;
//
//	stringstream ss(s);//把字符串s包装成一个字符串流ss，这样我们可以像cin读取一样从中提取单词
//	string word; //临时变量，用来存放每次从ss中读取的每一个单词
//	vector<string>arr;//创建一个字符串向量（动态数组），用来存放分割出来的单词
//
//	while (ss >> word)//ss>>word会从ss中按空格分割提取每一个单词到word
//	{
//		arr.push_back(word);
//	}
//
//	for (string& w : arr)//遍历arr中的每一个元素，w是每一个元素的引用（&表示引用，这样修改w会直接修改arr中的元素）
//	{
//		if (w == a)
//		{
//			w = b;
//		}
//	}
//
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (i > 0) cout << " ";
//		cout << arr[i];
//	}
//	cout << endl;
//
//	
//	return 0;
//}


#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	if (!s.empty() && s.back() == '.')
	{
		s.pop_back();
	}

	stringstream ss(s);
	vector<string>arr;
	string word;

	while (ss >>word )
	{
		arr.push_back(word);
	}

	int Maxlen = 0;
	string longestword;
	
	for (int i = 0; i < arr.size(); i++)
	{
		string w = arr[i];
		int len = w.length();//使用string的length方法
		if (len > Maxlen)
		{
			Maxlen = len;
			longestword = w;
		}
	}

	cout << longestword;

	return 0;
}










