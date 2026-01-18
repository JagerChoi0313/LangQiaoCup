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


#include <iostream>
#include <cmath>
using namespace std;

int N;
const int X = 1e5 + 10;
int arr1[X];
int arr2[X];

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
void perfect(int x)
{
    if (x <= 1)
    {
        cout << x << " is not perfect" << endl;
        return;
    }

    int sum = 1;//1总是真因子
    int count = 0;

    //只遍历到sqrt(x),因为因子是成对出现的
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            //存储第一个因子
            arr2[count] = i;
            count++;
            sum += i;

            //如果i和x/i不是同一个数，存储另一个因子

            if (i != x / i)
            {
                arr2[count] = x / i;
                count++;
                sum += x / i;
            }

        }
    }

    if (sum == x)
    {
        cout << x << " is perfect" << endl;
    }
    else
    {
        cout << x << " is not perfect" << endl;
    }
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        arr1[i] = x;
    }

    for (int j = 0; j < N; j++)
    {
        perfect(arr1[j]);
    }
    return 0;
}