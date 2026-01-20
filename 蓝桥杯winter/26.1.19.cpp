//725. 完全数
//题目

//一个整数，除了本身以外的其他所有约数的和如果等于该数，那么我们就称这个整数为完全数。
//
//例如，6
//就是一个完全数，因为它的除了本身以外的其他约数的和为 1 + 2 + 3 = 6
//。
//
//现在，给定你 N
//个整数，请你依次判断这些数是否是完全数。
//
//输入格式
//第一行包含整数 N
//，表示共有 N
//个测试用例。
//
//接下来 N
//行，每行包含一个需要你进行判断的整数 X
//。
//
//输出格式
//每个测试用例输出一个结果，每个结果占一行。
//
//如果测试数据是完全数，则输出 X is perfect，其中 X
//是测试数据。
//
//如果测试数据不是完全数，则输出 X is not perfect，其中 X
//是测试数据。
//
//数据范围
//1≤N≤100
//,
//1≤X≤108
//
//输入样例：
//3
//6
//5
//28
//输出样例：
//6 is perfect
//5 is not perfect
//28 is perfect
//


//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int N;
//const int X = 1e5 + 10;
//int arr1[X];
//int arr2[X];

//时间复杂度为O(x)
// 
//void perfect(int x)
//{
//    //计算一个数的余数并把它他们按顺序存入数组中
//    int count = 0;//关键一步
//    for (int i = 1; i < x; i++)
//    {
//        if (x % i == 0)
//        {
//            arr2[count] = i;
//            count++;
//        }
//
//    }
//
//    int sum = 0;
//    for (int j = 0; j < count; j++)
//    {
//        sum = sum + arr2[j];
//    }
//
//    if (sum == x)
//    {
//        cout << x << " is perfect" << endl;
//    }
//    else
//    {
//        cout << x << " is not perfect" << endl;
//    }
//}

//时间复杂度为O(√x)
//void perfect(int x)
//{
//    if (x <= 1)
//    {
//        cout << x << " is not perfect" << endl;
//        return;
//    }
//
//    int sum = 1;//1总是真因子
//    int count = 0;
//
//    //只遍历到sqrt(x),因为因子是成对出现的
//    for (int i = 2; i * i <= x; i++)
//    {
//        if (x % i == 0)
//        {
//            //存储第一个因子
//            arr2[count] = i;
//            count++;
//            sum += i;
//
//            //如果i和x/i不是同一个数，存储另一个因子
//
//            if (i != x / i)
//            {
//                arr2[count] = x / i;
//                count++;
//                sum += x / i;
//            }
//
//        }
//    }
//
//    if (sum == x)
//    {
//        cout << x << " is perfect" << endl;
//    }
//    else
//    {
//        cout << x << " is not perfect" << endl;
//    }
//}
//
//int main()
//{
//    cin >> N;
//    for (int i = 0; i < N; i++)
//    {
//        int x;
//        cin >> x;
//        arr1[i] = x;
//    }
//
//    for (int j = 0; j < N; j++)
//    {
//        perfect(arr1[j]);
//    }
//    return 0;
//}


//蛇形矩阵
//题目
//提交记录
//讨论
//题解
//视频讲解
//
//输入两个整数 n
//和 m
//，输出一个 n
//行 m
//列的矩阵，将数字 1
//到 n×m
//按照回字蛇形填充至矩阵中。
//
//具体矩阵形式可参考样例。
//
//输入格式
//输入共一行，包含两个整数 n
//和 m
//。
//
//输出格式
//输出满足要求的矩阵。
//
//矩阵占 n
//行，每行包含 m
//个空格隔开的整数。
//
//数据范围
//1≤n, m≤100
//
//输入样例：
//3 3
//输出样例：
//1 2 3
//8 9 4
//7 6 5


//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	
//	int n, m;
//	cin >> n >> m;
//	vector<vector<int>>matrix(n, vector<int>(m, 0));
//
//	//定义四个方向
//	int dx[4] = { 0,1,0,-1 };
//	int dy[4] = { 1,0,-1,0 };
//
//	//初始位置和方向
//	int x = 0;
//	int y = 0;
//	int dir = 0;//0表示向右，1向下，2向左，3向上
//
//	for (int i = 1; i <= n * m; i++)
//	{
//		matrix[x][y] = i;
//
//		//计算下一个位置
//		int nx = x + dx[dir];
//		int ny = y + dy[dir];
//
//		//如果下一个位置越界或已经被填充，则改变方向
//		if (nx < 0 || nx >= n || ny < 0 || ny >= m || matrix[nx][ny] != 0)
//		{
//			dir = (dir + 1) % 4;//改变方向
//			nx = x + dx[dir];
//			ny = y + dy[dir];
//		}
//
//		x = nx;
//		y = ny;
//	}
//
//	//输出结果
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//
//double matrix[12][12];
//double sum = 0.0;
//
//void Sum()
//{
//
//	double sum = 0;
//	for (int i = 0; i <5; i++) {
//		for (int j = i + 1; j <= 11 - i; j++) {
//			sum += matrix[i][j];
//		}
//	}
//
//
//	cout << fixed << setprecision(1) << sum << endl;
//}
//
//void Average()
//{
//	cout << fixed << setprecision(1) << sum / 30 << endl;
//
//}
//
//int main()
//{
//	char letter;
//	cin >> letter;
//
//
//	for (int i = 0; i < 12; i++)
//	{
//		for (int j = 0; j < 12; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//
//	if (letter == 'S')
//	{
//		Sum();
//	}
//	else if(letter=='M')
//	{
//		Average();
//	}
//
//	return 0;
//}
//




//772. 只出现一次的字符
//题目
//提交记录
//讨论
//题解
//视频讲解
//
//给你一个只包含小写字母的字符串。
//
//请你判断是否存在只在字符串中出现过一次的字符。
//
//如果存在，则输出满足条件的字符中位置最靠前的那个。
//
//如果没有，输出 no。
//
//输入格式
//共一行，包含一个由小写字母构成的字符串。
//
//数据保证字符串的长度不超过 100000
//。
//
//输出格式
//输出满足条件的第一个字符。
//
//如果没有，则输出 no。
//
//输入样例：
//abceabcd
//输出样例：
//e

//#include <iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//
//	unordered_map<char, int>count;
//
//	//统计每个字符出现次数
//	for (char ch : s)
//	{
//		count[ch]++;
//	}
//	//按顺序遍历字符串，找到第一个出现次数为1的字符
//
//	for (char ch : s)
//	{
//		if (count[ch] == 1)
//		{
//			cout << ch << endl;
//			return 0;
//		}
//	}
//
//	//如果没找到
//	cout << "no" << endl;
//	return 0;
//}