//#include <iostream>
//#include <cstdio>
//using namespace std;
//
////判断闰年
//bool isLeapYear(int year)
//{
//	return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
//}
//
////获取某年某月的天数
//int getMonthDays(int year, int month)
//{
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	if (month == 2 && isLeapYear(year))
//	{
//		return 29;
//	}
//
//	return days[month];
//}
//
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int y, m, d, a;
//		cin >> y >> m >> d >> a;
//
//		//先加天数
//		d += a;
//
//		//调整日期
//		while (d > getMonthDays(y, m))
//		{
//			d -= getMonthDays(y, m);
//			m++;
//			if (m > 12)
//			{
//				m = 1;
//				y++;
//			}
//		}
//
//		//输出yyyy-mm-dd格式
//		printf("%04d-%02d-%02d\n", y, m, d);
//	}
//	
//	
//	return 0;
//}

